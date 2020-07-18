/*Realice un programa que calcule el factorial de un numero: 1*2*3.....*n*/

#include<iostream>
using namespace std;

int main(){

    int numero, mul=1;

    cout<<"Ingrese un numero: "; cin>>numero;

    for(int i=1; i<=numero; i++){
        mul*=i; //multiplicacion iterativa
    }

    cout<<"La suma es: "<<mul<<endl;
    
    return 0;
}