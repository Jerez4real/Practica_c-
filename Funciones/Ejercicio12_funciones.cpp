/*Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector esta ordenado crecientemente. sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igueal que el elemento que le precede en el vector. */

#include<iostream>
using namespace std;

//prototipo de la funcion
void PedirDatos();
int Orden(int vector[], int); // se tiene que poner un vector y el tamaño del vector

//variables globales
int tam, vector[100];

int main(){
     
    PedirDatos();
    //cout<<Orden(vector, tam)<<endl;
    if(Orden(vector, tam) == tam-1){ //no tenemos encuenta la posicion 0
        cout<<" Esta ordenado ascendentemente."<<endl ;
    }else
    {
        cout<<" No Esta ordenado ascendentemente."<<endl ;
    }
    
    return 0;
}

void PedirDatos(){
    cout<<"Ingrese el tamaño del vector: "; cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"Ingrese el elemento #"<<i+1<<": "; cin>>vector[i];
    }
    
}

int Orden(int vector[], int tamano){
    int contador=0;
    for (int i = 1; i < tamano; i++)//inicia una posicion despues de la posicion 0
    {
        if(vector[i]>=vector[i-1]){
            contador++;
        }
    }
    return contador;
}