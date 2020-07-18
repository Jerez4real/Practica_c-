/*Escriba un programa que defina un vector de numeros y calcule la multiplicacion de los elementos*/

#include<iostream>
using namespace std;

int main(){

    int numeros[5]={1,2,3,4,5}, mul=1;

    for(int i=0; i<=4 ; i++){
        mul*=numeros[i];//multiplicacion iterativa
    }

    cout<<"la multiplicacion de los elementos del vector es: "<<mul<<endl;

    return 0;
}
