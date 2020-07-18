/*Realice un programa que calcule el valor de la suma de los primeros n impares indicados por el usuario: 1+3+5....+2n-1*/

#include<iostream>
using namespace std;

int main(){

    int numero, suma=0;

    cout<<"Ingrese numero de elementos a sumar: "; cin>>numero;

    for(int i=1; i<=2*numero-1; i+=2){// ciclo va hasta 2n-1 y aumenta cada impar
        suma+=i;//suma iterativa
    }

    cout<<"La suma es: "<<suma<<endl;
    
    return 0;
}