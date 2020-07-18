/*Escriba un programa que defina un vector de numeros y calcule la suma de los elementos*/

#include<iostream>
using namespace std;

int main(){

    int numeros[5]={1,2,3,4,5}, suma=0;

    for(int i=0; i<=4 ; i++){
        suma+=numeros[i];//suma iterativa
    }

    cout<<"la suma de los elementos del vector es: "<<suma<<endl;

    return 0;
}
