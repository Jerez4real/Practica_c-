/*Ordenamiento por Insercion */

#include<iostream>
using namespace std;

int main(){

    int numeros[] = {4,2,3,1,5}; // 2 4 3 1 5 - 2 3 4 1 5 - 1 2 3 4 5 
    int aux, posicion;

    //algoritmo de ordenamineto por Insercion
    for (int i = 0; i < 5; i++)
    {
        posicion = i; //solo aumenta
        aux = numeros[i]; //guardamos el numero actual

        while (posicion>0 && numeros[posicion-1]>aux) // mientras la posicion sea mayor a 0 y numero de la izquierda sea mayor a numero actual
        {
            numeros[posicion] = numeros[posicion-1]; // guardo en la posicion actual el numero de la izquierda
            posicion--; // me devuelvo una posicion 
        }
        numeros[posicion] = aux; // en la posicion actual guardo el numero de la variable aux para que no se pierda
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