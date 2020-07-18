/*Realizar un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, pais, numero_medallas y devuelva los datos(Nombre, pais) del atleta que ha ganado el mayor numero de medallas*/

#include<iostream>
#include<string.h>
using namespace std;

struct atleta
{
    char nombre[20];
    char pais[12];
    int numero_medallas;
}atletas[100];

int main(){
    int n_atletas=0, posicion_mayor, posicion_menor;
    int mayor_medallas=0, menor_medallas=9999;

    cout<<"Digite el numero de atletas: "; cin>>n_atletas;
    cout<<endl;
    
    for (int i = 0; i < n_atletas; i++)
    {
        cin.ignore();
        cout<<"Digite su nombre: "; cin.getline(atletas[i].nombre,20,'\n');
        cout<<"Digite su pais: "; cin.getline(atletas[i].pais, 12, '\n');
        cout<<"Digite su numero de medallas: "; cin>>atletas[i].numero_medallas;
        cout<<endl;

        if(atletas[i].numero_medallas > mayor_medallas){
            mayor_medallas = atletas[i].numero_medallas;
            posicion_mayor  = i;

        }
    }

    cout<<"atleta con mayor medallas: "<<endl;
    cout<<"Nombre: "<<atletas[posicion_mayor].nombre<<endl;
    cout<<"Pais: "<<atletas[posicion_mayor].pais<<endl;
    
    return 0;
}