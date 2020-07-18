/*realice un programa que calcule el valor que toma la siguiente funcion para valores dados de X y Y:
    f(x,y)=raiz(x)/(Y^2 - 1)*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float x,y,resultado=0;

    cout<<"Ingrese el valor de X: "; cin>>x;
    cout<<"Ingrese el valor de Y: "; cin>>y;
    resultado = sqrt(x)/(pow(y,2)-1);

    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}