/*Realice un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la funcion pow*/

#include<iostream>
using namespace std;

int main(){

    int x, y, aux=1;

    cout<<"ingrese la Base: "; cin>>x;
    cout<<"Ingrese el exponente: "; cin>>y;
    
    for(int i=1; i<=y; i++){ // se repite segun el exponente
        aux*=x;   // ej: aux=1*2 -> aux= 2*2 -> aux= 4*2 -> no cambia la base
    }

    cout<<x<<"^"<<y<<" = "<<aux<<endl;
    
    return 0;
}