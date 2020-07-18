/*Busqueda Secuencial, mas sencilla*/

#include<iostream>
using namespace std;

int main(){

    int arreglo[]= {3,4,2,1,5};
    int dato, i=0;
    bool bandera = false;

    dato = 2; //dato que queremos encontrar

    //Algoritmo 
    while ((bandera == false) && (i<5)) // mientras bandera sea falsa e iterador sea menor al tamaño del arreglo
    {
        if(arreglo[i] == dato){ //si encuentra el dato la bandera cambia
            bandera = true;
        }
       // cout<<bandera<<endl;
        i++;
    }

    if(bandera == false){
        cout<<"El numero a buscar no existe en el arreglo"<<endl;
    }else if(bandera == true)
    {
        cout<<"El numero a sido encontrado en la posicion: "<<i-1<<endl; //quito ultima iteracion que aumneto al salir del while
    }

    return 0;
}