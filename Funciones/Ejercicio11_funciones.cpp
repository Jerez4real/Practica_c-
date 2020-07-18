/*Realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos. */

#include<iostream>
using namespace std;

//prototipo de la funcion
void PedirDatos();
int Suma(int vector[], int); // se tiene que poner un vector y el tamaño del vector

//variables globales
int tam, vector[100];

int main(){
     
    PedirDatos();
     
    cout<<" El valor de la suma es: "<< Suma(vector, tam)<<endl;//no es necesario poner los parentesis en el vector


    return 0;
}

void PedirDatos(){
    cout<<"Ingrese el tamaño del vector: "; cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"Ingrese el elemento #"<<i+1<<": "; cin>>vector[i];
    }
    
}

int Suma(int vector[], int tamano){
    int suma=0;
    for (int i = 0; i < tamano; i++)
    {
        suma+=vector[i];
    }
    return suma;
}