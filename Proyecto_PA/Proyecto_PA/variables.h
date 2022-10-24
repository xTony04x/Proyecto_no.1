#pragma once
#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include "colores.h"
#include <stack>
using namespace std;
using namespace System;

class variables
{

    struct nodo
    {
        colores dato;
        nodo* next;
    };


private:
    nodo* Inicio = nullptr;
public:
    stack<string> p0;
    stack<string> p1;
    stack<string> p2;
    stack<string> p3;



    void agregarpila(nodo* lineas)
    {
        p0.push(lineas->dato.pila0);
        p1.push(lineas->dato.pila1);
        p2.push(lineas->dato.pila2);
        p3.push(lineas->dato.pila3);

    }

    nodo* LeerArchivo(string nombre) {
        colores dato;
        fstream archivo;
        int totalLines = 0;

        archivo.open(nombre,ios_base::in);

        string linea;

        char delimitador = ',';

        static nodo colores[100];

        while (archivo.good())
        {
            getline(archivo, linea);
            
            stringstream X(linea);
            
            nodo* lineas = new nodo;
            int countT = 0;
            string lineaT = "";
            string Espacios = "";

            while (getline(X, lineaT, delimitador)) {
                if (countT == 0) {

                    lineas->dato.pila0 = lineaT;
                }
                if (countT == 1) {
                    Espacios = "";
                    //Validacion de espacios iniciales
                    for (size_t i = 0; i < lineaT.length(); i++)
                    {
                        if (i < 2 && lineaT[i] == ' ')
                        {
                        }
                        else
                        {
                            Espacios = lineaT[i];
                        }
                    }
                    lineas->dato.pila1 = Espacios;
                }
                if (countT == 2) {

                    lineas->dato.pila2 = lineaT;
                }
                if (countT == 3) {
                    lineas->dato.pila3 = lineaT;
                }
                countT = countT + 1;
            }
            totalLines = totalLines + 1;
            agregarpila(lineas);
        }
        archivo.close();
        return colores;
    }
    colores* Almacenar()
    {
        static colores Info[200];
        int conteo = 0;
        nodo* Change = new nodo;
        Change = Inicio;

        while (Change)
        {
            Info[conteo].pila0 = Change->dato.pila0;
            Info[conteo].pila1 = Change->dato.pila1;
            Info[conteo].pila2 = Change->dato.pila2;
            conteo++;
            Change = Change->next;
        }
        return Info;
    }
    int contador()
    {
        int conteo = 0;
        nodo* Cantidad = Inicio;
        while (Cantidad) {
            conteo++;
            Cantidad = Cantidad->next;
        }
        return conteo;
    }

};

