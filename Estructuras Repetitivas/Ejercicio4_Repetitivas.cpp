/*Realice un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la Temperatura mas alta y la mas baja */

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int i=0;
    float Temperatura, media, suma=0, Temperatura_alta=-999, Temperatura_baja=999;

    while(i<6){ // mientras no esten todas las temperaturas se repite
        cout<<"Ingrese la Temperatura: "; cin>>Temperatura;
        suma += Temperatura; //suma iterativa
        if(Temperatura>Temperatura_alta){
            Temperatura_alta = Temperatura;
        }
        if(Temperatura<Temperatura_baja){
            Temperatura_baja = Temperatura;
        }
        i++;
    }

    media=suma/6;
    cout.precision(2);//redondear los resultados
    cout<<"\nTemperatura media del dia: "<<media<<" °C"<<endl;
    cout<<"Temperatura mas alta "<<Temperatura_alta<<" °C"<<endl;
    cout<<"Temperatura mas baja "<<Temperatura_baja<<" °C"<<endl;

    return 0;
}