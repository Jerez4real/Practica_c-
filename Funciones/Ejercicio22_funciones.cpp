/*Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la salida estandar los numeros del ini al fin. escriba una version que escriba los numeros en orden ascendente
    potencia(x,y) = ini                 , ini=fin
                    potencia(ini,fin-1) , fin > ini
    */
#include<iostream>
using namespace std;

//prototipo de la funcion
int escribeNumeros(int, int);

int main(){

    int inicio, final;

    cout<<"Numero inicio: "; cin>>inicio;
    cout<<"Numero Final: "; cin>>final;

    for(int i = inicio; i<= final ; i++){
        cout<<escribeNumeros(i, final)<<" "; //1 , 10
    }
    cout<<endl;
    return 0;
}

int escribeNumeros(int ini, int fin){
    if(ini == fin){ // caso base 
        return ini;
    }else{
        return escribeNumeros(ini, fin-1);
    }
}