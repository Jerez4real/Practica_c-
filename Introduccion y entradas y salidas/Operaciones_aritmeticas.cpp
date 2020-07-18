/*1. Escriba un programa que lea la entrada estandar de dos numeros y muestre en la salida estandar su suma, resta, mutiplicacion y division. */
#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    cout<<"la suma es: "<<num1+num2<<"\nla multiplicacion es: "<<num1*num2<<"\nla resta es: "<<num1-num2<<"\nla division es: "<<num1/num2<<endl;

    return 0;
}