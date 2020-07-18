/*Asignacion dinamica de arrglos
    new : Reserva el numero de bytes solicitada por la declaracion.
    delete : Libera un bloque de bytes reservada con anterioridad.
Ejemplo: pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
*/
#include<iostream>
#include<stdlib.h> // para usar new y delay
using namespace std;

//prototipo de funcion
void PedirNotas();
void MostrarNOtas();

//variables globales
int n_notas, *calif;

int main(){
    PedirNotas();
    MostrarNOtas();
    delete[] calif;//liberar memoria antes de terminar el programa en bytes(se usa corchetes por ser un arreglo). se usa despues del new
    return 0;
}

void PedirNotas(){
    cout<<"Ingrese numero de notas: "; cin>>n_notas;
    calif = new int[n_notas]; //crear el arreglo y pasandoselo a calif
    for (int i = 0; i < n_notas; i++)
    {
        cout<<"Ingrese nota:"; cin>>calif[i];
    }
    
}

void MostrarNOtas(){
    cout<<"\nNotas: "<<endl;
    for (int i = 0; i < n_notas; i++)
    {
        cout<<calif[i]<<endl; // en este caso si se utiliza [i]
    }
    
}