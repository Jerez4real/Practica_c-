/*Escriba un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector, Muestre el contenido del nuevo vector en la salida estandar.*/

#include<iostream>
using namespace std;

int main(){

    char palabra1[5]={'h','o','l','a',' '};
    char palabra2[5]={'m','u','n','d','o'};
    char frase[10];

    for (int i = 0; i < 10; i++)
    {
        if(i<=4){
            frase[i]=palabra1[i];//guardo la primera palabra en las primeras 5 iteraciones(5 posiciones)
        }else{
            frase[i]=palabra2[i-5];//guardo la segunda palabra en las otras 5 iteraciones y resto 5 a las iteraciones de la palabra 2 para que recorra el vector desde la posicion 0
        }
        
        cout<<frase[i];//mostrar frase 
    }

    cout<<endl;
    

    return 0;
}
