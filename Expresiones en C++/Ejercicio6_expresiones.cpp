/*Escriba un programa que lea las tres notas de un alumno y calcule la nota final media */

#include<iostream>
using namespace std;

int main(){

    float nota1,nota2,nota3,promedio;

    cout<<"Ingrese nota 1: "; cin>>nota1;
    cout<<"Ingrese nota 2: "; cin>>nota2;
    cout<<"Ingrese nota 3: "; cin>>nota3;
    promedio = (nota1 + nota2 + nota3)/3;
    cout.precision(2);//redondear la nota promedio

    cout<<"La nota final promedio es: "<<promedio<<endl;

    return 0;
}