#include <iostream>
using namespace std;


#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void mostrarPila(Pila<int> &p1)
{
    Pila<int> aux;
    int var;

    while (!p1.esVacia())
    {
        var = p1.pop();
        cout << var << " - ";
        aux.push(var);
    }

    while (!aux.esVacia())
    {
        p1.push(aux.pop());
    }
}

void reemplazar(Pila<int> &p1, int num, int nuevonum)
{
    Pila<int> Aux;
    int valor;
    while (!p1.esVacia())
    {
        valor = p1.pop(); // si no agarro el dato lo pierdo
        if (valor == num)//verfica si el numero es el que queremos reemplazar
        {
            Aux.push(nuevonum);//pushea el nuevo numero
        }
        else
        {
            Aux.push(valor); // pushea el valor que estaba pero estamos invirtiendo la pila
        }
    }

    while (!Aux.esVacia())//reorganiza la pila para no perder el orden
    {
        p1.push(Aux.pop());
    }
}

int main()
{

    cout << "Ejercicio N° 2" << endl;

    Pila<int> pila;
    int num, nuevovalor;

    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(2);
    pila.push(4);
    pila.push(5);
    pila.push(6);

    cout << "ingrese el numero que desea reemplazar y el nuevo valor" << endl;
    cin >> num;
    cin >> nuevovalor;

    mostrarPila(pila);

    reemplazar(pila, num, nuevovalor);
    cout << "" << endl;

    mostrarPila(pila);

    return 0;
}
