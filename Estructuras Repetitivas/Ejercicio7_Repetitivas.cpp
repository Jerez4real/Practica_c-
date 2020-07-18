/*Realice un programa que calcule el valor de: 1+2+3....+n*/

#include<iostream>
using namespace std;

int main(){

    int numero, suma=0;

    cout<<"Ingrese un numero: "; cin>>numero;

    for(int i=1; i<=numero; i++){
        suma+=i;//suma iterativa
    }

    cout<<"La suma es: "<<suma<<endl;
    
    return 0;
}