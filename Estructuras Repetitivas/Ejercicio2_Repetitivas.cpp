/*Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores mayores que cero leidos */

#include<iostream>
using namespace std;

int main(){

    int numero,contador=0;

    do
    {
        cout<<"Ingrese un numero: "; cin>>numero;
        if(numero > 0){
            contador++;
        }
    } while (numero != 0);//mientras el numero sea menor a 1 o mayor a 10 se repite 
    
    cout<<"Ingreso "<<contador<<" Numeros mayores a cero"<<endl;

    return 0;
}