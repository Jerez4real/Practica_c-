/*Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares*/

#include<iostream>
using namespace std;

int main(){

    int saldo_inicial=1000, opcion, ingreso, retiro;

    cout<<"\tBienvenido a su cajero Virtual "<<endl;
    cout<<"1.Ingresar Dinero en su cuenta \n2.Retirar dinero de la cuenta \n3.Salir \nOpcion: ";
    cin>>opcion;

    switch(opcion){
        case 1: cout<<"Dinero a ingresar: "; cin>>ingreso;
                saldo_inicial += ingreso; 
                cout<<"Dinero actual: "<<saldo_inicial<<"\n";
                break;
        case 2: cout<<"Dinero a retirar: "; cin>>retiro;
                if(retiro > saldo_inicial){
                    cout<<"No tiene suficiente dinero"<<endl;
                }else{
                    saldo_inicial -= retiro;
                    cout<<"Dinero actual: "<<saldo_inicial<<"\n";
                }
                break;
        case 3: break;
    }

    return 0;

}