/*Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus respectivos valores y por ultimo sumarlos*/

#include<iostream>
#include<stdlib.h> //atoi - atof
using namespace std;

int main(){

    char cadena[10];
    char cadena2[10];
    int numero1;
    float numero2;

    cout<<"Ingrese un numero entero: "; cin.getline(cadena,10,'\n');//guardo la palabra
    cout<<"Ingrese un numero real: "; cin.getline(cadena2,10,'\n');//guardo la palabra

    numero1 = atoi(cadena);
    numero2 = atof(cadena2);

    cout<<numero1<<'+'<<numero2<<" = "<<(numero1+numero2)<<endl;
    
    return 0;
}