/*Escriba un programa que lea dos numeros y determine cual de ellos es el mayor*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    cout<<"ingrese dos numeros separados por un espacio o enter: "; cin>>num1>>num2;//para guardar mas de un dato a la vez

    if(num1 > num2){
        cout<<num1<<" Es mayor a "<<num2<<endl;
    }else if(num1==num2){
        cout<<num2<<" Es igual a "<<num1<<endl;
    }else
    {
        cout<<num2<<" Es mayor a "<<num1<<endl;
    }
    

    return 0;
}