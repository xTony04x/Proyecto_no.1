#include "MyForm1.h"
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include"variables.h"

using namespace std;
using namespace ::System::IO;
using namespace System;
using namespace System::Windows::Forms;

static List* Noxus;
static Stack* Demacia;
static string color_mayor;
static int column_total = 0, filas = 0, columna_actual = -1, columna_m = filas, columna_M=0;
static int* colores;
static int espacios_blanco;
static bool mover = false;
static bool segunda_fase = false;
static string impresión = "ENTRADA\tSALIDA\n";

void Separador(string txt, int size_pilas, PictureBox^ game_board) {
	//lector
	size_t pos = 0;
	int countX = 0;
	string coma = ",";
	string color = "";
	//contador de columnas
	filas = size_pilas;
	for (char& finder : txt) {
		if (finder == 'X') {
			column_total++;
			if (column_total >= filas) {
				column_total = 0;
				goto Error;
			}
		}
	}
	column_total++;
	//pila
	Noxus = new List[column_total];
	Demacia = new Stack[column_total];
	int conteo_columnas = 0;
	int conteo_max = 0;
	//separador de comas
	while ((pos = txt.find(coma)) != string::npos) {
		color = txt.substr(0, pos);
		txt.erase(0, pos + coma.length());
		if (color == "P" || color == "B" || color == "G" || color == "Y") {
			Noxus[conteo_columnas].Add(color);
			Demacia[conteo_columnas].Push(color);
			conteo_max++;
		}
		else if (color == "X") {
			if (conteo_max > filas) {
				MessageBox::Show("Número de elementos sobre pasa la cantidad máxima de elementos por pila", "Error en el archivo de texto", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
			else {
				conteo_columnas++;
				conteo_max = 0;
			}
		}
	}
Error:
	if (column_total == 0) {
		MessageBox::Show("Número de saltos de pila mayor a elementos máximos por fila", "Error en el archivo de texto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		Dibujante(game_board);

	}
}
	void Dibujante(PictureBox ^ game_board) {
		int height = game_board->Height / filas;
		int width = game_board->Width / column_total;
		colores = new int[4];
		for (int i = 0; i < 4; i++)
		{
			colores[i] = 0;
		}
		PictureBox^ cuadro;
		string color;
		game_board->BackColor = Drawing::Color::AliceBlue;
		if (mover) {
			game_board->Controls->Clear();
			mover = false;
		}
		for (int i = 0; i < column_total; i++)
		{
			for (int j = 0; j < filas; j++)
			{
				cuadro = gcnew PictureBox;
				int pos_actual = filas - 1 - j;
				color = Noxus[i].Item(pos_actual);
				if (color == "P") {
					cuadro->Height = height;
					cuadro->Width = width;
					cuadro->Top = j * height;
					cuadro->Left = i * width;
					cuadro->BorderStyle = BorderStyle::FixedSingle;
					cuadro->BackColor = Drawing::Color::FromArgb(76, 69, 164);
					colores[0]++;
				}
				else if (color == "B") {
					cuadro->Height = height;
					cuadro->Width = width;
					cuadro->Top = j * height;
					cuadro->Left = i * width;
					cuadro->BorderStyle = BorderStyle::FixedSingle;
					cuadro->BackColor = Drawing::Color::FromArgb(107, 164, 193);
					colores[1]++;
				}
				else if (color == "G") {
					cuadro->Height = height;
					cuadro->Width = width;
					cuadro->Top = j * height;
					cuadro->Left = i * width;
					cuadro->BorderStyle = BorderStyle::FixedSingle;
					cuadro->BackColor = Drawing::Color::FromArgb(134, 204, 154);
					colores[2]++;
				}
				else if (color == "Y") {
					cuadro->Height = height;
					cuadro->Width = width;
					cuadro->Top = j * height;
					cuadro->Left = i * width;
					cuadro->BorderStyle = BorderStyle::FixedSingle;
					cuadro->BackColor = Drawing::Color::FromArgb(217, 212, 119);
					colores[3]++;
				}
				else {
					cuadro->Height = height;
					cuadro->Width = width;
					cuadro->Top = j * height;
					cuadro->Left = i * width;
					cuadro->BorderStyle = BorderStyle::FixedSingle;
					espacios_blanco++;
				}
				game_board->Controls->Add(cuadro);
			}
		}
		Ordenamiento_colores(game_board);
	}

	
	void BubbleSort() {
		vector<int>temp;
		int c = filas, x = 0;
		temp.resize(column_total);
		for (int i = 0; i < column_total; i++)
		{
			temp[i] = Noxus[i].Count();
		}
		int pos = 0;
		for (int i = 0; i < column_total; i++)
		{
			if (temp[i] < c && i != columna_actual) {
				columna_m = i;
				c = temp[i];
			}
			else if (temp[i] > x && i != columna_actual) {
				columna_M = i;
				x = temp[i];
			}
		}
	}

	//ordenamiento para encontrar color con mas repeticiones
	void Ordenamiento_colores(PictureBox ^ game_board) {
		int i;
		int x = 0, y = 0;
		if (columna_actual == -1) {

			for (i = 0; i < 4; i++)
			{
				int z = colores[i];
				if (z > x) {
					columna_actual = i;
					y = i;
					x = colores[i];
				}
				else if (z == x) {
					y = i;
					columna_actual = i;
				}
			}
			//ordena por indices//colores
			if (columna_actual == 0) {
				color_mayor = "P";
			}
			else if (columna_actual == 1) {
				color_mayor = "B";
			}
			else if (columna_actual == 2) {
				color_mayor = "G";
			}
			else if (columna_actual == 3) {
				color_mayor = "Y";
			}

			Pre_ordenar(game_board);
		}
	}

	
	void Pre_ordenar(PictureBox ^ game_board) {
		for (int i = 0; i < 4; i++)
		{
			if (colores[i] > filas) {
				Borrar(game_board);
				MessageBox::Show("Uno de los colores exceden el número máximo de elementos", "Error en el archivo de texto", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
		}
		if (espacios_blanco < filas) {
			Borrar(game_board);
			MessageBox::Show("No se cuenta con los espacios suficientes para ordenar las pilas", "Error en el archivo de texto", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	
	void Ordenar_SBS_Pila(PictureBox^ game_board) {
		
		BubbleSort();
		
		if (segunda_fase) {
			Ordenamiento_segundaFase_P(game_board);
		}
		else {
		
			while (Demacia[columna_actual].Count() != 0) {
				string color_actual = Demacia[columna_actual].Peek();
				Demacia[columna_m].Push(Demacia[columna_actual].Pop());
				Sacar_pila(Noxus[columna_actual], Noxus[columna_m], color_actual, game_board);
				Impresora(columna_actual, columna_m);
		
				break;
			}
			if (Demacia[columna_actual].Peek() == color_mayor && Demacia[columna_actual].Count() == 1 || Demacia[columna_actual].Count() == 0) {
				
				segunda_fase = true;
			}
		}
	}

	void Ordenamiento_segundaFase_P(PictureBox ^ game_board) {
		
		BubbleSort();
		int move_c = 0 - 1;
		for (int i = 0; i < column_total; i++)
		{
			if (Demacia[i].Peek() == color_mayor && i != columna_actual) {
				move_c = i;
				break;
			}
		}
		if (move_c == columna_actual || move_c == -1) {
			for (int i = 0; i < column_total; i++)
			{
				if (Noxus[i].Contains(color_mayor) && i != columna_actual && i != columna_m) {
					move_c = i;

				}
			}
			while (Demacia[move_c].Peek() != color_mayor) {
				string color_actual = Demacia[move_c].Peek();
				Demacia[columna_m].Push(Demacia[move_c].Pop());
				Meter_pila(Noxus[move_c], Noxus[columna_m], color_actual, game_board);
				Impresora(move_c, columna_m);
				break;

			}
		}
		else {
			while (Demacia[move_c].Peek() == color_mayor) {
				string color_actual = Demacia[move_c].Peek();
				Demacia[columna_actual].Push(Demacia[move_c].Pop());
				Meter_pila(Noxus[move_c], Noxus[columna_actual], color_actual, game_board);
				Impresora(move_c, columna_actual);
				break;
			}
		}
		if (Demacia[columna_actual].Count() == colores[columna_actual]) {
			for (int i = 0; i < Demacia[columna_actual].Count(); i++)
			{
				if (Noxus[columna_actual].Item(i) != color_mayor) {
					goto error;
				}
			}
			if (columna_actual == 0) {
				goto mover;
			}
			if (columna_actual > 0 && Noxus[0].Contains("B") || columna_actual > 0 && Noxus[0].Contains("G") && Demacia[0].Count() == colores[0] || columna_actual > 0 && Noxus[0].Contains("Y") && Demacia[0].Count() == colores[0]) {
				columna_actual = 0;
				color_mayor = "P";
				segunda_fase = false;
			}
			else {
			mover:
				for (size_t i = 1; i < column_total; i++)
				{
					if (i == 1 && i != columna_actual) {
						color_mayor = "B";
						columna_actual = 1;
						break;
					}
					else if (i == 2 && i != columna_actual) {
						color_mayor = "G";
						columna_actual = 2;
						break;
					}
					else if (i == 3 && i != columna_actual) {
						color_mayor = "Y";
						columna_actual = 3;
						break;
					}
				}
			}

			if (Noxus[0].Contains("B") || Noxus[0].Contains("G") || Noxus[0].Contains("Y")) {
				goto reinicio;
			}
			else if (Noxus[1].Contains("P") || Noxus[1].Contains("G") || Noxus[1].Contains("Y")) {
				goto reinicio;
			}
			else if ((Noxus[2].Contains("P") || Noxus[2].Contains("B") || Noxus[2].Contains("Y"))) {
				goto reinicio;
			}
			else if ((Noxus[3].Contains("P") || Noxus[3].Contains("B") || Noxus[3].Contains("G"))) {
				goto reinicio;
			}
			else {
				MessageBox::Show("!Felicidades!, puzzle resuelto", "Juego terminado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				goto fin;
			}
		reinicio:
			segunda_fase = false;

		}
		else {
		error:
			segunda_fase = true;
		}
	fin:
		int x;
	}
	void Sacar_pila(List salida, List entrada, string elemento, PictureBox ^ game_board) {
		entrada.Add(elemento);
		salida.RemoveAt(salida.Count() - 1);

		mover = true;
		Dibujante(game_board);

	}

	void Meter_pila(List salida, List entrada, string elemento, PictureBox ^ game_board) {
		entrada.Add(elemento);
		if (entrada.Count() - 1 == 0) {
			Noxus[columna_actual] = entrada;
		}
		salida.RemoveAt(salida.Count() - 1);

		mover = true;
		Dibujante(game_board);

	}


	void Impresora(int pos_salida, int pos_entrada) {
		string salida = to_string(pos_salida);
		string entrada = to_string(pos_entrada);
		impresión += salida + "\t" + entrada + "\n";
	}

	string Impresion() {
		return impresión;
	}


	void Borrar(PictureBox ^ game_board) {
		game_board->Controls->Clear();
		for (int i = 0; i < column_total; i++)
		{
			Noxus[i].Clear();
			Demacia[i].Clear();
		}
		for (int i = 0; i < 4; i++)
		{
			colores[4] = 0;
		}
		espacios_blanco = 0;
		columna_actual = -1;
		column_total = 0;
		filas = 0;
	}

 
	


