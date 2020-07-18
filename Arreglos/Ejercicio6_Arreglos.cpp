/*Escriba un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale a la suma del resto de numeros del vector*/

#include<iostream>
using namespace std;

int main(){

    int numeros[5]={1,2,3,4,10}, suma=0, mayor=0;

    //sumo todos los elementos del vector
    for(int i=0; i<=4 ; i++){
        suma+=numeros[i];
        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
    }
    //
    
    if(mayor==suma-mayor){
        cout<<"El numero "<< mayor <<" equivale a la suma de los demas"<<endl;
    }else
    {
        cout<<"no exite ningun numero que sea igual a la suma de los demas"<<endl;
    }
    

    return 0;
}
