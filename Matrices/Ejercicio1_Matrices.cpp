/* Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas, posteriormente mostrar la matriz en pantalla*/

#include<iostream>
using namespace std;

int main(){

    int filas,columnas;
    int matriz[100][100];

    cout<<"Ingrese el numero de filas: "; cin>>filas;
    cout<<"Ingrese el numero de columnas: "; cin>>columnas;

    for(int i=0; i<filas;i++){//primer for recorre filas
        
        for (int j = 0; j < columnas; j++)//segundo for recorre columnas
        {
            cout<<"Ingrese un numero("<<i<<","<<j<<"): "; cin>>matriz[i][j];
        }
    }

    cout<<"Matriz: "<<endl;

    //mostrar matriz
    for(int i=0; i<filas;i++){
        
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<endl;
    }

    return 0;
}