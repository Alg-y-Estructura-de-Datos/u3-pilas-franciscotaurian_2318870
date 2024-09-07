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


void reemplazar(Pila<int>&p1,int num1){
    Pila<int>aux1;
    bool encontrado=false;
    int contador=0;

    int valor;

    while (!p1.esVacia())
    {
        valor=p1.pop();
        if(valor==num1){    //verifico el numero
            if(!encontrado){
                encontrado=true;
                aux1.push(valor);
            }
            else
            {
                contador++;
            }
        }
        else
        {
            aux1.push(valor);//si no es el numero lo pusheo
        }
    }



    if (encontrado==true && contador==0)//si se encontro una sola vez lo saco
    {
        while (!aux1.esVacia())
        {
            valor=aux1.pop();
            if(valor!=num1){
                p1.push(valor);
            }
        } 
    }
    else //sino reorganizo la pila
    {
        while (!aux1.esVacia())
        {
            p1.push(aux1.pop());
        }
    }
    
    
    
}

int main() {

    cout << "Ejercicio N° 3" << endl;
    
    Pila<int> pila1;
    

    pila1.push(1);
    pila1.push(2);
    pila1.push(3);
    pila1.push(4);
    pila1.push(5);
    pila1.push(6);
    pila1.push(7);

    cout<<"Pila original"<<endl;

    mostrarPila(pila1);

    reemplazar(pila1,1);

    cout<<" "<<endl;

    cout<<"Nueva pila"<<endl;

    mostrarPila(pila1);


    
    
    return 0;
}
