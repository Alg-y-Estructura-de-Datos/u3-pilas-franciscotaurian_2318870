#include <iostream>
#include "Pila/Pila.h"
#include <string>
using namespace std;

void mostrarPila(Pila<string> &p1)
{
    Pila<string> aux;
    string var;

    while (!p1.esVacia())
    {
        var = p1.pop();
        cout << var << endl;
        aux.push(var);
    }

    while (!aux.esVacia())
    {
        p1.push(aux.pop());
    }
}

int main()
{

    cout << "Ejecicio n 7" << endl;

    string valor, palabra;
    int n;

    Pila<string> pila, pilaborrados, pilacciones;
    do
    {

        cout << "Ingrese (escribir) o (borrar) o (deshacer)" << endl;
        getline(cin, valor);
        if (valor != "deshacer")
        {
            cout << "Ingrese la palabra" << endl;
            getline(cin, palabra);

            if (valor == "escribir")
            {
                pila.push(palabra);
                pilacciones.push(valor);
            }
            else if (pila.esVacia() == false && valor == "borrar")
            {
                pilaborrados.push(pila.pop());
                pilacciones.push(valor);
            }

        }
        else{
            if(pila.esVacia() == false)
            {
                if (pilacciones.pop() == "borrar")
                {
                    pila.push(pilaborrados.pop());
                }
                else
                {
                    pila.pop();
                }
            }
        }
        cout << "Presione 1 para salir, 0 para continuar" << endl;
        cin >> n;
        cin.ignore();

    } while (n != 1);

    cout << "***Texto***" << endl;
    mostrarPila(pila);
}