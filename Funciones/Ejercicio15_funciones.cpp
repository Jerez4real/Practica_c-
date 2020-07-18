/*Desarrollar una funcion que determine si una matriz es simetrica o no
    -la matriz debe ser cuadrada
    - filas = columnas
    /2  5  9/
    /5  8 -1/
    /9 -1 10/
*/

//prototipo de funciones
void PedirDatos();
void ImprimirMatriz(int m[][100], int, int); //obligatorio poner maximo de columnas
void MatrizSimetrica(int m[][100], int, int); //obligatorio poner maximo de columnas

#include<iostream>
using namespace std;

//variables globales
int filas, columnas, matriz[100][100];

int main(){

    PedirDatos();
    MatrizSimetrica(matriz,filas,columnas);
    ImprimirMatriz(matriz, filas, columnas);
    return 0; 
}

void PedirDatos(){
    do{
        cout<<"Ingrese numero de filas: "; cin>>filas;
        cout<<"Ingrese numero de columnas: "; cin>>columnas;
        if(filas!=columnas){
            cout<<"las filas deben ser iguales a las columnas"<<endl;
        }
    }while(filas != columnas );

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            {
                cout<<"Ingrese un numero["<<i<<","<<j<<"]: "; cin>>matriz[i][j];
            }
    }
    cout<<endl;
}

void MatrizSimetrica(int m[][100], int nfilas, int ncolumnas){

    int contador=0;

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncolumnas; j++)
        {
            if(m[i][j]==m[j][i]) // matriz debe ser igual a matriz invertida(filasxcolumnas)
            {
                contador++;
            }
        }
    }

    if (contador == nfilas*ncolumnas) // contador debe ser igual al total de datos
    {
        cout<<"La matriz es simetrica: "<<endl;
    }else{
        cout<<"La matriz no es simetrica: "<<endl;
    }
}

void ImprimirMatriz(int m[][100], int nfilas, int ncolumnas){
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