/*Realice un programa que calcule la descomposicion en factores primos de un numero entero ej: 20=2*2*5.*/

#include<iostream>
#include<stdlib.h>//para agregar pause
using namespace std;

int main(){ 

    int numero,i=2;

    cout<<"Ingrese un numero: "; cin>>numero;
    cout<<numero<<" = "; //imprime numero 

    while(numero>1){ // se repite hasta que el resultado de la division sea 1
        if(numero%i==0){ //si el resto es igual a 0 se divide por ese numero (i) (es divisible)
            numero/=i;
            cout<<i; // muestro la iteracion cuya resto da 0 
            if(numero!=1){ // para que no se muestre un * extra al final 
                cout<<"*"; // ej: 10 ->* 5->* 
            }
        }else{ // si el resto no es igual a 0 aumento la iteracion
            i++;
        }
    }
    cout<<endl;

    //system("pause");
    return 0;
}