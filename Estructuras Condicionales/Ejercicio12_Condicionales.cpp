/*Hacer un menu que considere las siguiemtes opciones: 1. Cubo de un numero 2. numero par o impar 3. salir*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int par_Imp, opcion;
    float numero;

    cout<<"\tMenu"<<endl;
    cout<<"1.Cubo de un numero \n2.Numero par o impar \n3.Salir \nOpcion: ";
    cin>>opcion;

    switch(opcion){
        case 1: cout<<"Digite un numero: "; cin>>numero;
                numero = pow(numero,3); 
                cout<<"Respuesta: "<<numero<<endl;
                break;
        case 2: cout<<"Digite un numero: "; cin>>par_Imp;
                if(par_Imp%2==0){
                    cout<<"Es par"<<endl;
                }else{
                    cout<<"Es Impar "<<endl;
                }
                break;
        case 3: break;
    }

    return 0;

}