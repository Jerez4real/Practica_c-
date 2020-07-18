/*Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo y despliegue el resultado. El numero entero positivo debera ser el segundo valor transmitido a la funcion*/

#include<iostream>
using namespace std;

//prototipo de las funciones
void pedirDatos();
void funpot(int x, int y);

//variables globales 
int base, exponente;

int main(){

    pedirDatos();
    funpot(base, exponente);

    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la base: "; cin>>base;
    cout<<"Ingrese el exponente: "; cin>>exponente;
}

void funpot(int x, int y){
    long resultado=1; // long por si no es suficinte el espacio para guardar la potencia
    for (int i = 1; i <= y; i++)
    {
        resultado *= x;
    }
    cout<<x<<"^"<<y<<" = "<<resultado<<endl;
    
}
