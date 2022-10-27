#include "MyForm1.h"
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>

using namespace std;
using namespace ::System::IO;
using namespace System;
using namespace System::Windows::Forms;

static List* Noxus;
static Stack* Demacia;
static string color_mayor;
static int column_total = 0, filas = 0, columna_actual = -1;
static int* colores;
static int espacios_blanco;
static bool mover = false;
static bool segunda_fase = false;
static string impresión = "ENTRADA\tSALIDA\n";

void spaces() {
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
	


