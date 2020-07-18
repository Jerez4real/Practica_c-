/*Realice una funcion que tome como parametros un vector y su tamaño y cambie el signo de los elementos del vector */

#include<iostream>
using namespace std;

//prototipo de la funcion
void PedirDatos();
void CambioSigno(int vector[], int); // se tiene que poner un vector y el tamaño del vector
void ImprimirVector(int vector[], int);

//variables globales
int tam, vector[100];

int main(){
     
    PedirDatos();
    CambioSigno(vector, tam);
    ImprimirVector(vector, tam);

    return 0;
}

void PedirDatos(){
    cout<<"Ingrese el tamaño del vector: "; cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"Ingrese el elemento #"<<i+1<<": "; cin>>vector[i];
    }
    
}

void CambioSigno(int vec[], int tamano){

    for (int i = 0; i < tamano; i++)
    {
        vec[i]*=-1; // multiplicar por -1 para cambiar el signo de los elementos
    }

}

void ImprimirVector(int vector[], int tamano){
    for (int i = 0; i < tamano; i++)
    {
        cout<<vector[i]<<" "; //imprimir el vector
    }
    cout<<endl;
}