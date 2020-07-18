/*Realice un programa que le solicite al usuario que piense un numero entero entre el 1 y el 100. el programa debe generar un numero aleatorio en ese mismo rango[1-100], e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine. Mostar numero de intentos*/

#include<iostream>
#include<time.h>//numero aleatorio
#include<stdlib.h>
using namespace std;

int main(){ 

    int numero, dato, intentos=0;

    srand(time(NULL));//generar numero aleatorio
    dato = 1 + rand() % (100); //limite_inferior=1 limite_superior=100;

    do{
        cout<<"Digite un numero: "; cin>>numero;
        if(numero > dato){
            cout<<"Digite un numero menor"<<endl;
        }else if(numero < dato)
        {
            cout<<"Digite un numero mayor"<<endl;
        }
        intentos++;
    }while(numero != dato); // mientras numero sea diferente a aleatorio se repite

    cout<<"\nFelicidades adivinaste el numero: "<<dato<<endl;
    cout<<"Numero de intentos: "<<intentos<<endl;
    
    system("pause");
    return 0;
}