/*Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena */

#include<iostream>
#include<string.h> //atoi - atof
using namespace std;

int main(){

    char cadena[10];
    int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;

    cout<<"Ingrese una palabra: "; cin.getline(cadena,10,'\n');//guardo la palabra

    for(int i=0; i<strlen(cadena); i++){
        switch (cadena[i])
        {
        case 'a': vocal_a++; break;
        case 'e': vocal_e++; break;
        case 'i': vocal_i++; break;
        case 'o': vocal_o++; break;
        case 'u': vocal_u++; break;
        }
    }

    cout<<"vocal a: "<<vocal_a<<" Veces"<<endl;
    cout<<"vocal e: "<<vocal_e<<" Veces"<<endl;
    cout<<"vocal i: "<<vocal_i<<" Veces"<<endl;
    cout<<"vocal o: "<<vocal_o<<" Veces"<<endl;
    cout<<"vocal u: "<<vocal_u<<" Veces"<<endl;

    return 0;
}