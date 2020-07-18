/*Realice una funcion que dada una matriz y un numero de fila de la matriz devuelva el menor de los elementos almacenados en dicha fila
*/

//prototipo de funciones
void PedirDatos();
int NumeroMenor(int m[][100], int, int); //obligatorio poner maximo de columnas
void ImprimirMatriz(int m[][100], int, int); //obligatorio poner maximo de columnas

#include<iostream>
using namespace std;

//variables globales
int fila_search, filas, columnas, matriz[100][100];

int main(){

    int fila;

    PedirDatos();
    ImprimirMatriz(matriz, filas, columnas);
    cout<<"el numero menor de la fila "<<fila_search<<" es: "<<NumeroMenor(matriz,fila_search,columnas)<<endl;
    
    return 0; 
}

void PedirDatos(){
    
    cout<<"Ingrese numero de filas: "; cin>>filas;
    cout<<"Ingrese numero de columnas: "; cin>>columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            {
                cout<<"Ingrese un numero["<<i<<","<<j<<"]: "; cin>>matriz[i][j]; // se guardan los datos
            }
    }
    cout<<endl;

    do{
        cout<<"ingrese el numero de fila que desea saber el menor: "; cin>>fila_search;
    }while(fila_search>filas || fila_search <= 0); // se repite si el valor supera el numero de fila o si es menor o igual a 0
    
}

void ImprimirMatriz(int m[][100], int nfilas, int ncolumnas){
    cout<<endl;
    for (int i = 0; i < nfilas; i++)
        {
            for (int j = 0; j < ncolumnas; j++)
            {
                cout<<m[i][j]<<' ';
            }
            cout<<endl;
        }
        cout<<endl;
}

int NumeroMenor(int m[][100], int nfilas, int ncolumnas){
    
    int menor = 999;

    for (int i = nfilas-1 ; i <= nfilas-1; i++) // solo recorre la fila solicitada, se le resta 1 porque comienza desde 0 los espacios
    {
        for (int j = 0; j < ncolumnas; j++)
        {
            if(m[i][j]<menor){
                menor = m[i][j]; // se va reemplazando cada vez que encuentre un numero menor
            }
        }
    }

    return menor;

}

