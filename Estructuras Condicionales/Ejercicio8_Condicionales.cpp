/*Escriba un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero e indicar si el numero coincide con alguno de los intoducidos con anterioridad*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3, num4;

    cout<<"ingrese tres numeros separados por espacio: "; cin>>num1>>num2>>num3;
    cout<<"Ingrese otro numero: "; cin>>num4;

    if(num4 == num1 || num4 == num2 || num4 == num3){
        cout<<"Ultimo numero coincide con los ingresados anteriormente "<<endl;
    }else{
        cout<<"Ultimo numero no coincide con los anteriores"<<endl;
    }

    return 0;
}