/*Escriba un programa que lea de la entrada estandar un vector de enteros y determine el mayor elemento del vector*/

#include<iostream>
using namespace std;

int main(){

    int numeros[10], nElementos, mayor=0;

    cout<<"Cuantos elementos va a ingresar: "; cin>>nElementos;

    //Guardar Elementos y verificar cual es el mayor
    for(int i=0; i<nElementos; i++ ){
        cout<<"Digite un numero: "; cin>>numeros[i];
        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
    }

    cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}
