/*Escriba un programa que solicite una edad e indique en la salida estandar si la edad introducida esta en el rango [18-25]*/

#include<iostream>
using namespace std;

int main(){

    int edad;

    cout<<"ingrese su edad: "; cin>>edad;

    if(edad >= 18 && edad <=25){
        cout<<"Edad entre 18 y 25 "<<endl;
    }else{
        cout<<"Edad no esta en el rango [18-25]"<<endl;
    }

    return 0;
}