/* Hacer una matriz de tipo entera de 2*2, llenarla de numeros y copiar todo su conntenido en otra matriz*/

#include<iostream>
using namespace std;

int main(){

    int matriz1[2][2], matriz2[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Ingrese un numero: "; cin>>matriz1[i][j]; //guardar datos en matriz
            matriz2[i][j] = matriz1[i][j]; //copiar datos de matriz1 en matriz2
        }
    }

    cout<<"la Matriz es: "<<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<matriz2[i][j]<<' '; // imprimir datos de matriz 2
        }
        cout<<endl;
    }

    return 0;
}