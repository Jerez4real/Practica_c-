/*Pedir su nombre al usuario en mayusculas, si su nombre comienza por la letra A, convertir su nombre a minusculas, caso contrario no convertirlo*/

#include<iostream>
#include<string.h>
#include <ctype.h> // para towlower
using namespace std;

int main(){

    char cadena[10];

    cout<<"Ingrese su nombre en MAYUSCULA: "; cin.getline(cadena,10,'\n');//guardo la palabra

    if(cadena[0]=='A' || cadena[0]=='a'){
        for (int i = 0; i < strlen(cadena); i++) // convierto a minusculas con towlower, es necesario usar un bucle
        {
            cadena[i]=towlower(cadena[i]); 
        }
        cout<<cadena<<endl;//imprimo la palabra
    }else
    {
        cout<<"No comienza con la letra A"<<endl;
    }
    
    

    return 0;
}