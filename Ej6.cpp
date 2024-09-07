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

    cout << "Ejercicio N° 6" << endl;

    string valor, lugar;
    int n;

    Pila<string> recorrido;
    do
    {
        
        cout << "Ingrese (in) o (out)" << endl;
        getline(cin, valor);
        cout << "Ingrese el nombre el lugar al que ingreso" << endl;
        getline(cin,lugar);

        if (valor == "in")
        {
            recorrido.push(lugar);
        }
        if (recorrido.esVacia() == false && valor == "out")
        {
            recorrido.pop();
        }
        cout<<"Presione 1 para salir, 0 para continuar"<<endl;
        cin>>n;
        cin.ignore();
        
    } while (n != 1);

    cout << "La persona ciruculo por los siguientes lugares." << endl;
    mostrarPila(recorrido);

    return 0;
}