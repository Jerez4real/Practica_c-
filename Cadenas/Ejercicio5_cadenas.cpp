/*Hacer un programa que determine si una palabra es polindroma*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char cadena[10];
    char reverso[10];
    char temporal;

    cout<<"Ingrese una palabra: "; cin.getline(cadena,10,'\n');//guardo la palabra

    strcpy(reverso,cadena);//copio la palabra en una cadena nueva para invertirla

    //
    for (int i = 0, j = strlen(reverso) - 1; i < (strlen(reverso) / 2); i++, j--) {
        temporal = reverso[i]; //guardo primera letra en una variable aux
        reverso[i] = reverso[j]; // reemplazo la primera letra por la ultima
        reverso[j] = temporal; // reemplazo la ultima letra por la primera
    }

    if(strcmp(cadena,reverso)==0){ // ==0 -> si son iguales
        cout<< reverso <<" Es un palindromo"<<endl;
    }else
    {
        cout<< reverso <<" No es un palindromo"<<endl;
    }

    return 0;
}