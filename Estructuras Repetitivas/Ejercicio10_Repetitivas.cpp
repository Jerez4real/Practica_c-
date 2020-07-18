/*Realice un programa que calcule la suma de los factoriales de un numero: 1!+2!.....*n!*/

#include<iostream>
using namespace std;

int main(){

    int numero, mul=1, suma=0;

    cout<<"Ingrese un numero: "; cin>>numero;

    for(int i=1; i<=numero; i++){
        mul*=i; //1*1=1->1*2=2....
        suma+=mul;//0+1=1->1+2=3....
    }

    cout<<"La suma de los factoriales es: "<<suma<<endl;
    
    return 0;
}