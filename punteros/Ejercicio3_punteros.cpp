/*Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeros pares y su posicion en memoria*/
#include<iostream>
using namespace std;

int main(){
    int arreglo[10], *parreglo;

    for(int i = 0; i < 10; i++){
        cout<<"Ingrese un numero: "; cin>>arreglo[i];
    }

    parreglo = arreglo; // en los arreglos no es necesario agregar el &

    for(int i = 0; i < 10; i++){
        if(*parreglo % 2 == 0){
            cout<<endl<<*parreglo<<" Es par"<<endl;
            cout<<"Posicion memoria: "<<parreglo<<endl;
        }
        *parreglo++; //para punteros se utiliza ++ para avanzar por los elemntos y se utiliza [i] para avanzar por las direcciones de memoria
        
    }

    
    return 0;
}