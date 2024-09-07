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

void sumarNum(Pila<int>&p1,int n1){
    Pila<int>aux;
    int valor;

    while (!p1.esVacia())
    {
        valor=p1.pop();
        valor+=n1;
        aux.push(valor);
    }

    while (!aux.esVacia())
    {
        p1.push(aux.pop());
    }
}

int main()
{

    cout << "Ejercicio n 5" << endl;

    Pila<int> pila;
    int n1;

    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(6);
    pila.push(2);

    cout << "Pila original" << endl;
    mostrarPila(pila);
    cout<<" "<<endl;

    cout<<"Ingrese el numero que le desea sumar, tope de 3"<<endl;
    cin>>n1;

    sumarNum(pila,n1);

    cout<<"Nueva pila"<<endl;
    mostrarPila(pila);
    cout<<" "<<endl;



}