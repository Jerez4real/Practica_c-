/*Orednacion Rapida(quicksort): Mas eficiente de todos los algoritmos
    1. Seleccionar el elemento central de a[] como pivote
    2. Dividir los elementos restantes en particiones izquierda y derecha, de modo que ningun elemento de la izquierda tenga una clave mayor que el pivote y que ningun elemento a la derecha tenga una clave mas pequeña que la del pivote
    3. Ordenar la particion izquierda utilizando quiqckSort recursivamente.
    4. Ordenar la particion derecha utilizando quickSort recursivamente.
    5. La solucion es partcion izquierda segida por el pivote y la partcion derecha.
*/

#include<iostream>
using namespace std;

//prototipo de funciones
void quickSort(float a[], int, int);
void intercambio(float &x, float &y);

int main(){

    float arreglo[]={4,7,1,8,2,10,5,9,3};

    quickSort(arreglo,0,8); // comienza en 0 entonces al tamaño se le resta 1

    cout<<"orden ascendente: "<<endl;

    for (int i = 0; i < 9; i++) // cuidado con el tamaño del arreglo
    {
        cout<<arreglo[i]<<' ';
    }

    cout<<"\norden descendente: "<<endl;

    for (int i = 8; i >= 0; i--) // cuidado con el tamaño del arreglo
    {
        cout<<arreglo[i]<<' ';
    }
    cout<<endl;

    return 0;
}

void quickSort(float a[], int primero, int ultimo){
    int i, j, central;
    float pivote; //igual al tipo de datos del arreglo 

    central = (primero+ultimo)/2; // numero en el centro del arreglo
    pivote = a[central]; //posicion que corresponde al numero en el centro del arreglo
    i = primero;
    j = ultimo;

    do{
        while(a[i] < pivote ) i++; // minetras elemnetos al lado ziauierdo del pivote sean menores a este incremento una posicion
        while( a[j] > pivote) j--; // minetras elemento a la derecha del pivote sea mayor decremento posiciones

        if(i<=j){ // al encontrar un elemento mayor al pivote y menor al pivote 
            intercambio(a[i],a[j]);
            i++;
            j--;
        }

    }while(i<=j); //cuando i y j se crucen se termina el bucle

    //Recursividad
    if(primero < j){
        quickSort(a,primero,j); //le pasamos desde la primera posicion hasta la posicion central (Ordenamos la sublista izquierda)
    }
    if(i < ultimo){
        quickSort(a,i,ultimo); // le pasamos desde el centro hasta ultimo (Ordenamos la sublista derecha)
    }
}

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}