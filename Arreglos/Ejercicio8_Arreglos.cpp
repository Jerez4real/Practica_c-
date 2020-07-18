/*Escriba un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.*/

#include<iostream>
using namespace std;

int main(){

    int lectura[5], Arreglo2[5];

    for (int i = 0; i < 10; i++)
    {
        if(i<=4){//las primeras 5 iteraciones (es decir 5 posiciones) pido los numeros y los guardo en el otro arreglo 
            cout<<"ingrese un numero: "; cin>>lectura[i]; //
            Arreglo2[i]=lectura[i]*2;
        }else{ // las ultimas 5 iteraciones(es decir 5 posiciones) muestro el arreglo multiplicado por 2
            cout<<Arreglo2[i-5]<<" "; // al arreglo 2 le resto 5 a las iteraciones para que comience desde la posicion 0 a recorrerlo y mostrarlo
        }
    }
    cout<<endl;

    return 0;
}
