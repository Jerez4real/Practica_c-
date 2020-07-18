/* Hacer una matriz preguntandole al usuario el numero de filas y columnas, llenarla de numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en pantalla*/

#include<iostream>
#include<time.h>//numero aleatorio
using namespace std;

int main(){

    int filas, columnas, matriz1[100][100]={0}, matriz2[100][100], dato_aleatorio,numero;

    srand(time(NULL)); //generar numero aleatorio

    cout<<"Ingrese el numero de filas: "; cin>>filas;
    cout<<"Ingrese el numero de columnas: "; cin>>columnas;

    for(int i=0 ; i < filas ; i++){
        for(int j = 0 ; j < columnas ; j++){
            dato_aleatorio= 1 + rand() % (100); //limite_inferior=1 limite_superior=100
            matriz1[i][j]=dato_aleatorio; // guardar numeros aleatorios en l amatriz
            matriz2[i][j] = matriz1[i][j]; // copiar los datos en matriz 2
        }
    }

    cout<<"\nMatriz Aleatoria: "<<endl;

    for(int i=0 ; i < filas ; i++){
        for(int j = 0 ; j < columnas ; j++){
            cout<<matriz2[i][j]<<' '; // imprimir matriz 2
        }
        cout<<endl;
    }

    return 0;
}