/*Realice un programa que lea un valor entero y determine si se trata de un par o impar*/

#include<iostream>
using namespace std;

int main(){

    int numero;

    cout<<"ingrese un nuemro entero: "; cin>>numero;

    if(numero%2==0){ 
        cout<<numero<<" Es Par "<<endl;
    }else{
        cout<<numero<<" Es impar"<<endl;
    }

    return 0;
}