/*Busqueda Binaria: el arreglo debe estar ordenado en forma ascendente; es mas eficiente y rapida*/

#include<iostream>
using namespace std;

int main(){

    int arreglo[]= {1,2,3,4,5};
    int inferior, superior, mitad, dato;
    bool bandera = false;

    dato = 2; //dato que queremos encontrar

    //Algoritmo 
    inferior = 0; 
    superior = 5; //inicializar con el numero de elementos del arreglo
    while (inferior <= superior) //para recorrer todo el vector
    {
        mitad = (inferior + superior)/2;
        if(arreglo[mitad] == dato){ //si encuentra el dato la bandera cambia
            bandera = true;
            break; // si ya lo encontro rompo el ciclo
        }
        if(arreglo[mitad] > dato){ // si mitad mayor a dato reduzco el las posciones en donde buscra
            superior = mitad;
            mitad = (inferior + superior)/2; //actualizo mitad
        }
        if(arreglo[mitad] < dato){
            inferior = mitad;
            mitad = (inferior + superior)/2; // actualizo mitad
        }
    }

    if(bandera == false){
        cout<<"El numero a buscar no ha sido encontrado"<<endl;
    }else
    {
        cout<<"El numero a sido encontrado en la posicion: "<<mitad<<endl; 
    }

    return 0;
}