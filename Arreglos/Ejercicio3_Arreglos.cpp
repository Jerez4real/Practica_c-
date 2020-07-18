/*Escriba un programa lea de la entrada estandar un vector de numeros y muestre en la salida estandar los numero del vector con sus indices asociados*/

#include<iostream>
using namespace std;

int main(){

    int numeros[10],n;

    cout<<"Digite el numero de elementos a ingresar: "; cin>>n;

    //Guardar Elementos del Vector
    for(int i=0; i<n; i++){//itero hasta n 
        cout<<"Ingrese un numero: "; cin>>numeros[i];
    }

    //Mostrar Elementos del Vector
    for(int i=0; i<n; i++){
        cout<<"Posicion"<<i<<" -> "<<numeros[i]<<endl;
    }

    return 0;
}
