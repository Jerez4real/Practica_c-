/* Realice un programa que determine si una matriz es simetrica o no. una matriz es simetrica si es cuadrada y si es igual a su matriz traspuesta: 
 /8 1 3/        /8 1 3/
 /1 7 4/  -->   /1 7 4/
 /3 4 9/        /3 4 9/
 */

#include<iostream>
using namespace std;

int main(){

    int filas,columnas, matriz[100][100], bandera=0;

    //pedir datos
    do{
        cout<<"Ingrese el numero de filas: "; cin>>filas;
        cout<<"Ingrese el numero de columnas: "; cin>>columnas;
        if(filas!=columnas){
            cout<<"filas y columnas deben ser iguales para que sea una matriz simetrica"<<endl;
        }
    }while(filas!=columnas);

    // llenar matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Ingrese un numero["<<i<<','<<j<<"]: "; cin>>matriz[i][j];
        }
    }

    // Verificar si la matriz es igual a su transpuesta con un contador 
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if(matriz[i][j]==matriz[j][i]){
                bandera++; // por cada dato que sea igual la bandera incrementa
            }
        }
    }

    // Imprimir la matriz
    cout<<" \n\tMatriz: "<<endl;
    for (int i = 0; i < filas; i++)
    {
        cout<<"\t"; //antes de cada fila agregamos un espacio
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j]<<' '; 
        }
        cout<<endl; // al terminar una fila se agrega salto de linea
    }

    // si el contador es igual al total de datos de la matriz es traspuesta
    if(bandera == (filas*columnas)){ 
        cout<<"La matriz es simetrica"<<endl;
    }else{
        cout<<"La matriz no es simetrica"<<endl;
    }
    
    return 0;
}