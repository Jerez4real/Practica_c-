/*Escriba un programa que devuelva la parte fraccionaria de cualquier numero introducido por el usuario. por ejemplo si se introduce el numero 256.879, deberia desplegarse 0.879*/

#include<iostream>
using namespace std;

//prototipo de funciones
void PedirDato();
float DevolverParteDecimal(float x);

//variables globales
float numero;

int main(){

    PedirDato();
    cout<<"La parte decimal es: "<<DevolverParteDecimal(numero)<<endl;

    return 0;
}

void PedirDato(){
    cout<<"Ingrese un numero fraccionario: "; cin>>numero;
}

float DevolverParteDecimal(float x){
    int parteEntera;
    float parteDecimal;
    parteEntera = x;
    parteDecimal = x-parteEntera;
    return parteDecimal;
}

