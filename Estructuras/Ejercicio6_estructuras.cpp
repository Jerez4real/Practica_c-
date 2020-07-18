/*Utilizar las 2 estructuras del problema 5. pero ahora pedir los datos para N alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir sus datos.
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
} estud[100]; // arreglo para varios estudiantes

int main(){
    float promedio[100], mayor_promedio=0;
    int n_estudiantes, posicion;

    cout<<"Ingrese el numero de estudiantes: "; cin>>n_estudiantes;
    cout<<endl;

    for (int i = 0; i < n_estudiantes; i++)
    {
        cin.ignore();//borrar buffer
        cout<<"Ingrese su nombre: "; cin.getline(estud[i].nombre, 20, '\n');
        cout<<"Ingrese su sexo: "; cin.getline(estud[i].sexo, 10,'\n');
        cout<<"Ingrese su edad: "; cin>>estud[i].edad;
       
        cout<<"Ingrese nota 1: "; cin>>estud[i].prom_alumno.nota1;
        cout<<"Ingrese nota 2: "; cin>>estud[i].prom_alumno.nota2;
        cout<<"Ingrese nota 3: "; cin>>estud[i].prom_alumno.nota3;
        cout<<endl;

        promedio[i] = (estud[i].prom_alumno.nota1 + estud[i].prom_alumno.nota2 + estud[i].prom_alumno.nota3)/3;

        if(promedio[i] > mayor_promedio){
            mayor_promedio = promedio[i];
            posicion= i;
        }
    }
    

    cout<<"\nDatos Estudiante con mejor promedio: "<<endl;

    cout<<"Nombre: "<<estud[posicion].nombre<<endl;
    cout<<"Sexo: "<<estud[posicion].sexo<<endl;
    cout<<"Edad: "<<estud[posicion].edad<<endl;
    cout<<"Promedio: "<<promedio[posicion]<<endl;

    return 0;
}