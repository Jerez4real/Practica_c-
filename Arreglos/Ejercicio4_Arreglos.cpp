/*Escriba un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso - del ultimo al primer elemento*/

#include<iostream>
using namespace std;

int main(){

    int numeros[10]={1,2,3,4,5,6,7,8,9,10};

    //Mostrar Elementos del Vector desde la ultima posicion
    for(int i=9; i>=0; i--){
        cout<<numeros[i]<<endl;
    }

    return 0;
}
