/*Hacer 2 estructuras una llamada promedio que tendra los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendra los siguinetes miembros: nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
*/

#include<iostream>
#include<string.h>
using namespace std;

struct promedio
{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio prom_alumno;
} estudiante1;

int main(){
    float promedio=0;

    cout<<"Ingrese su nombre: "; cin.getline(estudiante1.nombre, 20, '\n');
    cout<<"Ingrese su sexo: "; cin.getline(estudiante1.sexo, 10,'\n');
    cout<<"Ingrese su edad: "; cin>>estudiante1.edad;
    //cin.ignore(); // para borrar el buffer
    
    cout<<"Ingrese nota 1: "; cin>>estudiante1.prom_alumno.nota1;
    cout<<"Ingrese nota 2: "; cin>>estudiante1.prom_alumno.nota2;
    cout<<"Ingrese nota 3: "; cin>>estudiante1.prom_alumno.nota3;

    promedio = (estudiante1.prom_alumno.nota1 + estudiante1.prom_alumno.nota2 + estudiante1.prom_alumno.nota3)/3;

    cout<<"\nDatos Estudiante: "<<endl;

    cout<<"Nombre: "<<estudiante1.nombre<<endl;
    cout<<"Sexo: "<<estudiante1.sexo<<endl;
    cout<<"Edad: "<<estudiante1.edad<<endl;
    cout<<"Promedio: "<<promedio<<endl;

    return 0;
}