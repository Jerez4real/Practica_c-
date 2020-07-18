#include<iostream>
using namespace std;

int main(){

    float a,b,resultado;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    resultado = (a/b)+1;
    cout.precision(2);//para redondear el valor del resultado en caso de tener decimales
    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}