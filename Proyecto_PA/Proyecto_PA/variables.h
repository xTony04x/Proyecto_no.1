#pragma once
#include <string.h>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace ::System::IO;
using namespace System;
using namespace System::Windows::Forms;

struct Node {
	string data;
	Node* siguiente;
};

class List {
private:
public:
	Node* top;
	List() {
		top = nullptr;
	}
	void Add(string color) {
		Node* agregar = new Node();
		agregar->siguiente = nullptr;
		agregar->data = color;
		if (!top || top->data == "")
		{
			top = agregar;
			top->data = color;
		}
		else
		{
			Node* temp = top;
			while (temp->siguiente)
			{
				temp = temp->siguiente;
			}
			temp->siguiente = agregar;
		}
	}
	string Item(int index) {
		try {
			bool found;
			int count = 0;
			Node* aux = new Node();
			aux = top;
			while (aux != NULL) {
				if (count == index) {
					found = true;
					return aux->data;
				}
				else {
					if (aux->siguiente != NULL) {
						aux = aux->siguiente;
						count++;
					}
					else {
						return "Index out of bounds";
					}
				}
			}
			if (!found) {
				return "Index out of bounds";
			}
		}
		catch (Exception^ e) {
			String^ g = e->Message;
			string error = msclr::interop::marshal_as<std::string>(g);
			return error;
		}
	}
	bool Contains(string item) {
		Node* aux = new Node();
		aux = top;
		while (aux != NULL) {
			if (aux->data == item) {
				return true;
			}
			else {
				aux = aux->siguiente;
			}
		}
		return false;
	}
	int Count() {
		int contador = 0;
		Node* count = top;
		while (count != NULL) {
			contador++;
			count = count->siguiente;
		}
		return contador;
	}
	bool RemoveAt(int index) {
		Node* inicio = top;
		int count = 0;
		bool removido = false;
		while (inicio != NULL) {
			Node* remove;
			Node* prev;
			if (count == index && inicio == top) {
				if (index == 0 && top->siguiente == NULL) {
					top->data = "";
					top->siguiente = nullptr;
					return true;
				}
				else {

				}
			}
			else if (count == index && inicio != top) {
				prev->siguiente = remove;
				inicio = prev;
				return true;
			}
			else {
				prev = inicio;
				inicio = inicio->siguiente;
				remove = inicio->siguiente;
				count++;
			}
		}
		return false;
	}
	void Clear() {
		Node* aux = new Node();
		Node* siguiente;
		while (aux != NULL) {
			siguiente = aux->siguiente;
			delete aux;
			aux = siguiente;
		}
		List();
	}
	int IndexOf(string item) {
		int pos = -1;
		Node* actual = new Node();
		actual->siguiente = top;
		while (actual->siguiente != NULL) {
			if (actual->data == item) {
				return pos;
			}
			else {
				actual = actual->siguiente;
				pos++;
			}
		}
		return -1;
	}
};

class Stack {
private:
	Node* top;
public:
	Stack() {
		top = nullptr;
	}
	void Push(string item) {
		Node* agregar = new Node();
		(*agregar).data = item;
		agregar->siguiente = nullptr;
		if (!top) {
			top = agregar;
		}
		else {
			agregar->siguiente = top;
			top = agregar;
		}
	}
	string Pop() {
		string devolucion = top->data;
		top = top->siguiente;
		return devolucion;
	}
	string Peek() {
		try {
			if (top != NULL) {
				string devolucion = top->data;
				return devolucion;
			}
			else {
				return "Exception";
			}
		}
		catch (Exception^ e) {
			String^ g = e->Message;
			string error = msclr::interop::marshal_as<std::string>(g);
			return error;
		}
	}
	int Count() {
		int contador = 0;
		Node* count = top;
		while (count != NULL) {
			contador++;
			count = count->siguiente;
		}
		return contador;
	}
	void Clear() {
		Node* aux = new Node();
		Node* siguiente;
		while (aux != NULL) {
			siguiente = aux->siguiente;
			delete aux;
			aux = siguiente;
		}
		Stack();
	}
};

void Separador(string txt, int size_pilas, PictureBox^ pic);
void Dibujante(PictureBox^ pic);
void BubbleSort();
void Ordenamiento_colores(PictureBox^ game_board);
void Pre_ordenar(PictureBox^ game_board);
void Ordenar_SBS_Pila(PictureBox^ game_board);
void Ordenamiento_segundaFase_P(PictureBox^ game_board);
void Sacar_pila(List salida, List entrada, string elemento, PictureBox^ game_board);
void Meter_pila(List salida, List entrada, string elemento, PictureBox^ game_board);
void Impresora(int posx, int posy);
void Borrar(PictureBox^ game_board);
string Impresion();


