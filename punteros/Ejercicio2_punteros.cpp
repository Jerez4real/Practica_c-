/*Comprobar si un numero es primo o no; con pntero y ademas indicar en que posicion se guardo el numero*/
#include<iostream>
using namespace std;

int main(){
    int primo, *pprimo, cont_divisores=0;
    cout<<"Ingrese un numero: "; cin>>primo;
    pprimo = &primo; //puntero
    for (int i = 1; i <= *pprimo; i++) 
    {
        if(*pprimo % i == 0){ // para saber si es divisible por el numero i
            cont_divisores++; 
        }
    }

    if( cont_divisores == 2){ //primo solo si tiene dos divisores 1 y el mismo numero
        cout<<"El numero "<<*pprimo<<" Es primo"<<endl;
        cout<<"direccion de memoria: "<< pprimo<<endl;
    }else{
        cout<<"El numero "<<*pprimo<<" No es primo"<<endl;
        cout<<"direccion de memoria: "<< pprimo<<endl;
    }
    
    return 0;
}