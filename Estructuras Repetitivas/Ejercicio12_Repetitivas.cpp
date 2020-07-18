/*Realice un programa que calcule el valor de 1-2+3-4+5....n*/

#include<iostream>
using namespace std;

int main(){

    int numero, operacion=0;

    cout<<"Ingrese un valor: "; cin>>numero;

    for(int i=1;i<=numero;i++){
        if(i%2!=0){ //si son impares se hace suma iterativa
            operacion+=i;//0+1=1
        }else //si son pares se hace resta iterativa
        {
            operacion-=i;//1-2=-1
        }   
    }

    cout<<"El resultado es: "<<operacion<<endl;

    return 0;
}