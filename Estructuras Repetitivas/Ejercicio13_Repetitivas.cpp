/*Realice un programa que calcule la serie de fibonacci: 1,1,2,3,5,8,13,..n*/

#include<iostream>
using namespace std;

int main(){

    int numero, resultadoAnterior=0, resultadoActual=1, resultado=1;

    cout<<"Ingrese numero de elementos: "; cin>>numero;

    for(int i=1;i<=numero;i++){   

        cout<<resultado<<',';
        resultado=resultadoAnterior+resultadoActual; //0+1=1, 1+1=2, 1+2=3 
        resultadoAnterior=resultadoActual;  // 1, 1, 2
        resultadoActual=resultado; // 1, 2, 3
        
    }

    return 0;
}
//0+1=1 -> 1+1=2 -> 1+2=3 -> 2+3=5 -> 3+5=8 -> 5+8=13