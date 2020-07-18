/*Crear una cadena que tenga la sguiente frase "hola que tal, luego crear otra cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje completo"Hola que tal nombre*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char cadena[] = "Hola que tal ";
    char nombre[10];

    cout<<"Ingrese su nombre: "; cin.getline(nombre,10,'\n');

    strcat(cadena,nombre);//concateno

    cout<<cadena<<endl; // imprimir cadena final

    return 0;
}