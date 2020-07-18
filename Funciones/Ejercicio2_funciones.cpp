/*Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado. la funcion debera ser capaz de elevar alcuadrado numeros flotantes*/

#include<iostream>
#include<math.h>
using namespace std;

//prototipos de Funciones
void pedirDatos();
void al_cuadrado(float x);

float base;//variables globales

int main(){

    pedirDatos();
    al_cuadrado(base);

    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la base: "; cin>>base;
}

void al_cuadrado(float x){
    cout<<x<<"^2 = "<< pow(x,2)<<endl;
}