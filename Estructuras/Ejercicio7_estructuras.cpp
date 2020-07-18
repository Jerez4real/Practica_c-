/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. la estructura debe tener tres campos: horas, minuto y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas*/

#include<iostream>
using namespace std;

struct tiempo{
    int horas;
    int minutos;
    int segundos;
}etapas[100]; 

int main(){
    int n_etapas, horas_t=0, min_t=0, seg_t=0, aux=0, aux2=0;
    cout<<"Ingrese el numero de etapas: "; cin>>n_etapas;

    for(int i=0; i<n_etapas; i++){
        cout<<"\nIngrese horas etapa "<<i+1<<": "; cin>>etapas[i].horas;
        cout<<"Ingrese minutos etapa "<<i+1<<": "; cin>>etapas[i].minutos;
        cout<<"Ingrese segundos etapa "<<i+1<<": "; cin>>etapas[i].segundos;

        horas_t +=  etapas[i].horas;
        min_t += etapas[i].minutos;
        seg_t += etapas[i].segundos;
    }

    aux2 = seg_t;
    aux2 = aux/60; // divido los segundos en 60 -> 1min = 60seg
    min_t += aux; // se los voy sumando a min_t cada vez que se complete un minuto
    seg_t %= 60; // dejo en segundos lo que sobre del minuto no completado

    aux = min_t;
    aux = aux/60; // divido los minutos en 60 -> 1hora = 60 min
    horas_t+=aux; // se los voy sumando a horas_t cada vez que se complete una hora
    min_t%=60; // dejo en minutos lo que sobre de la hora no completada

    cout<<"\nTiempo total empleado: "<<endl;
    cout<< "Horas: "<< horas_t<<endl;
    cout<< "Minutos: "<< min_t<<endl;
    cout<< "Segundos: "<< seg_t<<endl;

    return 0;
}