/*Convertir 2 cadenas de minusculas a Mayusculas. compararlas y decir si son iguales*/

#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main(){

    char cadena[] = "hola sapo";
    char cadena2[] = "hola perro";

    for (int i = 0; i < strlen(cadena); i++) // convierto a mayusculas con toupper, es necesario usar un bucle
    {
        cadena[i]=toupper(cadena[i]); 
    }

    for (int i = 0; i < strlen(cadena); i++) // convierto a mayusculas con toupper, es necesario usar un bucle
    {
        cadena2[i]=toupper(cadena2[i]); 
    }

    if(strcmp(cadena,cadena2)==0){ // ==0 -> si son iguales
        cout<<cadena<<" Son iguales"<<endl;
    }else
    {
        cout <<" No son iguales"<<endl;
    }
    


    return 0;
}