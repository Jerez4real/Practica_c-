/*Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento unico que se le trasnmite cuando es invocada la funcion*/

#include<iostream>
using namespace std;

//prototipo de funciones
template <class TIPOD>
void Despliegue(TIPOD x);

int main(){

    int num1 = 23;
    float num2 = 123.45;
    double num3 = 123.4569;
    char letra = 'a';

    Despliegue(num1);
    Despliegue(num2);
    Despliegue(num3);
    Despliegue(letra);

    return 0;
}

template <class TIPOD>
void Despliegue(TIPOD x){
    cout<<"El dato es: "<<x<<endl;
}

