/*Hacer una estructura llamada corredor, en la cual se tendran las siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor y asi una categoria de competicion:
    Juvenil <= 18 años
    Señor <= 40 años
    Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion.*/

#include<iostream>
#include<string.h>
using namespace std;

struct corredor
{
    char nombre[20];
    int edad;
    char sexo[9];
    char club[10];
}corredor1;

int main(){
    char categoria[10];
    
    cout<<"Ingrese nombre: "; cin.getline(corredor1.nombre,20,'\n');
    cout<<"Ingrese edad: "; cin>>corredor1.edad;
    cin.ignore(); //vaciar buffer y permitir digitar los valores(la memoria se llena muy rapido con cadenas)
    cout<<"Ingrese Sexo: "; cin.getline(corredor1.sexo,9,'\n');
    cout<<"Ingrese club: "; cin.getline(corredor1.club,10,'\n');
    
    cout<<endl;

    if(corredor1.edad <= 18 ){
        strcpy(categoria, "juvenil");
    }else if(corredor1.edad <= 40){
        strcpy(categoria, "Senior");
    }else{
        strcpy(categoria, "Veterano");
    }

    cout<<"\nDatos del corredor: "<<endl;
    cout<<"Nombre: "<<corredor1.nombre<<endl;
    cout<<"Edad: "<<corredor1.edad<<endl;
    cout<<"Sexo: "<<corredor1.sexo<<endl;
    cout<<"Club: "<<corredor1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    return 0;
}