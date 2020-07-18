/*Realice una funcion que tome como parametros un vector de enteros y su tamaño e imprima un vector con los elementos impares del vector recibido. */

#include<iostream>
using namespace std;

//prototipo de la funcion
void PedirDatos();
void ElementosImpares(int vector[], int); // se tiene que poner un vector y el tamaño del vector
void ImprimirVector(int vector[], int);

//variables globales
int tam, vector[100], vector_impares[100], tam_impares=0;

int main(){
     
    PedirDatos();
    ElementosImpares(vector, tam);
    ImprimirVector(vector_impares, tam_impares); //

    return 0;
}

void PedirDatos(){
    cout<<"Ingrese el tamaño del vector: "; cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"Ingrese el elemento #"<<i+1<<": "; cin>>vector[i];
    }
    
}

void ElementosImpares(int vec[], int tamano){

    for (int i = 0; i < tamano; i++)
    {
        if(vec[i]%2 != 0){ // modulo diferente de 0 es igual a impares
            vector_impares[tam_impares]=vec[i]; // guardo en un nuevo vector los impares
            tam_impares++; // tam_impares es lo mismo que decir j.
        }
    }

}

void ImprimirVector(int vector[], int tamano){
    for (int i = 0; i < tamano; i++)
    {
        cout<<vector[i]<<" "; //imprimir el vector
    }
    cout<<endl;
}