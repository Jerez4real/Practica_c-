/*Ordenamiento por seleccion*/

#include<iostream>
using namespace std;

int main(){

    int numeros[] = {4,2,3,1,5}; 
    int aux, minimo;

    for (int i = 0; i < 5; i++)
    {
        minimo = i;
        for (int j = i+1; j < 5; j++) // comienza una posicion despues de la actual 
        {
            if (numeros[j] < numeros[minimo]) // si numero i+1 es menor al numero de la derecha 
            {
                minimo = j; // guardo la posicon del numero menor
            }
        }
        aux = numeros[i]; // guardo en auxiliar el numero de la posicion actual
        numeros[i] = numeros[minimo]; // guardo en las primeras posiciones los valores menores 
        numeros[minimo] = aux; // intercambio el valor donde se encontaraba el menor valor anterior
    }

    cout<<"orden ascendente: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<numeros[i]<<' ';
    }

    cout<<"\norden descendente: "<<endl;

    for (int i = 4; i >= 0; i--)
    {
        cout<<numeros[i]<<' ';
    }
    cout<<endl;
    

    return 0;
}