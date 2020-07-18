/*Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

#include<iostream>
#include<string.h>
using namespace std;

struct alumno
{
    char nombre[20];
    int edad;
    float promedio;
}alumnos[3]; //se van a pedir datos a 3 alumnos

int main(){

    float mejorPromedio = 0;

    for(int i=0; i<3; i++){
        cout<<"Ingrese su nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
        cout<<"Ingrese su edad: "; cin>>alumnos[i].edad;
        cout<<"Ingrese su Promedio: "; cin>>alumnos[i].promedio;
        cout<<endl;
        cin.ignore(); //vaciar buffer y permitir digitar los valores(la memoria se llena muy rapido con cadenas)
        if(alumnos[i].promedio > mejorPromedio){
            mejorPromedio = alumnos[i].promedio;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if(alumnos[i].promedio == mejorPromedio){
            cout<<"Alumno con mejor promedio: "<<endl;
            cout<<"nombre: "<<alumnos[i].nombre<<endl;
            cout<<"Edad: "<<alumnos[i].edad<<endl;
            cout<<"Promedio: "<<alumnos[i].promedio<<endl;
        }
    }
    



    return 0;
}