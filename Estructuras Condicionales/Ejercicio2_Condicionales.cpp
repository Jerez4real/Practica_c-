/*Escriba un programa que lea tres numeros y determine cual de ellos es el mayor*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout<<"ingrese tres numeros separados por un espacio o enter: "; cin>>num1>>num2>>num3;//para guardar mas de un dato a la vez

    if(num1 > num2 && num1 > num3){
        cout<<num1<<" Es mayor a "<<num2<<" y a "<<num3<<endl;
    }else if(num2 > num1 && num2 > num3){
        cout<<num2<<" Es mayor a "<<num1<<" y a "<<num3<<endl;
    }else if(num3 > num1 && num3 > num2){
        cout<<num3<<" Es mayor a "<<num1<<" y a "<<num2<<endl;
    }else{
        cout<<"Son iguales"<<endl;
    }
    

    return 0;
}