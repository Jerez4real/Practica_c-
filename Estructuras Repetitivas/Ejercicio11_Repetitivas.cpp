/*Realice un programa que calcule el valor de 2^1+2^2+2^n*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int numero, exponente=0, suma=0;

    cout<<"Ingrese el exponente: "; cin>>numero;

    for(int i=1; i<=numero; i++){
        exponente= pow(2,i);//calcula el exponente de acuerdo a el valor de la iteracion
        suma+=exponente;//suma iterativa del exponente anterior
    }

    cout<<"la suma es: "<<suma<<endl;
    
    return 0;
}