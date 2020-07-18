/*Estructura Basica: para poder utilizar diferentes tipos de datos sin necesidad de declarar muchas veces una variable*/

#include<iostream>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Andres",20},
persona2 = {"Jorge",15},
persona3;

int main(){
    cout<<"Nombre1: "<< persona1.nombre<<endl;
    cout<<"Edad1: "<< persona1.edad<<endl;

    cout<<"Nombre2: "<< persona2.nombre<<endl;
    cout<<"Edad2: "<< persona2.edad<<endl;

    cout<<"Ingrese Nombre: "; cin.getline(persona3.nombre, 20, '\n');
    cout<<"Ingrese Edad: "; cin>>persona3.edad;

    cout<<"Nombre3: "<< persona3.nombre<<endl;
    cout<<"Edad3: "<< persona3.edad<<endl;

    return 0;
}