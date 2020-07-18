/*Comprobar si un numero es positivo o negativo*/

#include<iostream>
using namespace std;

int main(){

    int numero;

    cout<<"ingrese un numero: "; cin>>numero;

    if(numero>=0){
        cout<<numero<<" Es Positivo "<<endl;
    }else{
        cout<<numero<<" Es negativo"<<endl;
    }

    return 0;
}