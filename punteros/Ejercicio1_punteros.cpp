/*Comprobar si el numero es par o impar, y señalar la posicion de memoria donde se guarda el numero con punteros*/
#include<iostream>
using namespace std;

int main(){
    int num, *pnum; //el puntero debe ser del mismo tipo del dato con un *
    cout<<"Inserte un numero: "; cin>>num;
    pnum = &num; //se le agrega el & para indicar la posicion en memoria
    cout<<"\nel numero es: "<<*pnum<<endl;
    cout<<"La posicion en memoria es: "<<pnum<<endl;
    return 0;
}