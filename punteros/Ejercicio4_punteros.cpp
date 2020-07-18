/*Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo*/
#include<iostream>
using namespace std;

int main(){
    int arreglo[100], *parreglo, n_elementos, menor=999;

    cout<<"numeros a Ingresar: "; cin>>n_elementos;

    for(int i = 0; i < n_elementos; i++){
        cout<<"Ingrese un numero: "; cin>>arreglo[i];
    }

    parreglo = arreglo; // en los arreglos no es necesario agregar el &

    for(int i = 0; i < n_elementos; i++){
        if(*parreglo < menor){
            menor = *parreglo;
        }
        *parreglo++; //para punteros de arreglos no se usa ietrador para aumenta poscion memeoria, se utiliza ++
    }

    cout<<"El menor es: "<<menor<<endl;

    
    return 0;
}