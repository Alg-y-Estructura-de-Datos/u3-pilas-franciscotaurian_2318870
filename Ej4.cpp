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

int sumarnums(Pila<int> &p1, int num){
    int valor,sum=0;
    while (!p1.esVacia())
    {
        valor=p1.pop();
        if(valor==num){
            return sum;
        }
        else
        {
            sum+=valor;
        }
    }
    return sum;
    
}


int main(){
    Pila<int> pila;
    int n1;

    pila.push(3);
    pila.push(5);
    pila.push(2);
    pila.push(8);
    pila.push(7);

    cout<<"Pila original"<<endl;
    mostrarPila(pila);
    cout<<" "<<endl;

    n1=2;

    cout<<"La sumatoria hasta el numero: "<<n1<<". Es: "<<sumarnums(pila,n1);


}