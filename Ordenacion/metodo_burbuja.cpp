/*Metodo burbuja*/

#include<iostream>
using namespace std;

int main(){

    int numeros[]={4,1,3,2,5};
    int aux;

    //algoritmo metodo burbuja
    for (int i = 0; i < 5; i++) // for va hasta tamaño del arreglo
    {
        for (int j = 0; j < 5; j++)
        {
            if(numeros[j] > numeros[j+1]){ // si numero actual mayor a siguiente
                aux = numeros[j]; //guardo el actual en variable aux
                numeros[j] = numeros[j+1]; // en posicion actual guardo el valor de la posicion siguinete
                numeros[j+1] = aux; // en la posicion siguiente guardo el valor actual
            }
        }   
    }

    cout<<"orden ascendente: "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<numeros[i]<<' ';
    }

    cout<<"\norden descendente: "<<endl;

    for (int i = 4; i >= 0; i--)
    {
        cout<<numeros[i]<<' ';
    }
    cout<<endl;
    
    

    return 0;
}