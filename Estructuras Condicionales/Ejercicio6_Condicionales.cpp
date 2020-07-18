/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o mayuscula o no es una vocal*/

#include<iostream>
using namespace std;

int main(){

    char vocal;

    cout<<"ingrese un caracter: "; cin>>vocal;

    if(vocal=='a' || vocal=='e' || vocal=='i' || vocal=='o' || vocal=='u'){
        cout<<vocal<<" Es minuscula "<<endl;
    }else if(vocal=='A' || vocal=='E' || vocal=='I' || vocal=='O' || vocal=='U'){
        cout<<vocal<<" Es mayuscula"<<endl;
    }else{
        cout<<vocal<<" No es una vocal"<<endl;
    }

    /*otra forma con switch
    switch (vocal)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':   cout<<"Es una vocal minuscula"<<endl; break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':   cout<<"Es una vocal MAYUSCULA"<<endl; break;
    default:    cout<<"No es una vocal"<<endl; break;
    }*/

    return 0;
}