/*La calificacion final de un estudiante es el promedio de tres notas:

    -la nota de practicas que cuenta con un 30% del total
    -la nota teorica que cuenta un 60%
    -la nota de participacion que cuenta el 10% restante
Escriba un programa que lea las tres notas del alumno y escriba su nota final.*/

#include<iostream>
using namespace std;

int main(){

    float nota1, nota2, nota3, final;

    cout<<"Ingrese la nota de practicas: "; cin>>nota1;
    cout<<"Ingrese la nota de teoria: "; cin>>nota2;
    cout<<"Ingrese la nota de participacion: "; cin>>nota3;

    final = nota1*0.3 + nota2*0.6 + nota3*0.1;

    cout<<"La nota final es: "<<final<<endl;

    return 0;
}