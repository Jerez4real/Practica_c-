/*Escriba una funcion recursiva que calcule un numero elevado a una potencia entera mayor o igual que cero: x^y
    potencia(x,y) = x                 , y=1
                    x*potencia(x,y-1) , y>1
    */
#include<iostream>
using namespace std;

//prototipo de la funcion
int Potencia(int, int);

int main(){

    int base, exponente;

    cout<<"Ingrese la base: "; cin>>base;
    do{
    cout<<"Ingrese el exponente: "; cin>>exponente;
    }while(exponente < 0);

    cout<<endl;
    cout<<base<<"^"<<exponente<<" = " <<Potencia(base, exponente)<<endl;


    return 0;
}

int Potencia(int base, int exp){
    if(exp == 0){
        base = 1;
    }else if(exp == 1){
        base = base;
    }else{
        base = base * Potencia(base, exp-1); // 2 * (2 *  2)
    }
    return base;
}