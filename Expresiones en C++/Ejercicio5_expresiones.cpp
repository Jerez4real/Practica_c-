/*Escriba un fragmento de programa que intercambie los valores de dos variables*/

#include<iostream>
using namespace std;

int main(){

    int a, b, aux;

    cout<<"Ingrese el valor de a:"; cin>>a;
    cout<<"Ingrese el valor de b:"; cin>>b;
    aux=a;
    a=b;
    b=aux;
    cout<<"El nuevo valor de a es: "<<a<<"\nEl nuevo valor de b es: "<<b<<endl;

    return 0;
}