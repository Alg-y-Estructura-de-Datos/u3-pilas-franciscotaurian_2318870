#include <iostream>
#include "Pila/Pila.h"
using namespace std;

int main() {

    cout << "Ejercicio N° 1" << endl;

    Pila<char> pila;
    char caracter;

    cout<<"Ingrese una palabra o frase (termine con un punto)"<<endl;

    do
    {
        cin.get(caracter);
        if(caracter!='.'){
            pila.push(caracter);
        }
    } while (caracter!='.');

    while (!pila.esVacia())
    {
        cout<<pila.pop();
    }
    
    
    return 0;
}
