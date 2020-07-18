/*Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg y tres parametros de referencia en numero entero nombrados horas, min y seg respectivamente. LA funcion es convertir el numero de segundos transmitido en un numero equivalente de horas, minutos y segundos. */

#include<iostream>
using namespace std;

//prototipo de funciones
void Tiempo(int,int&,int&,int&); //se le agrega & para indicar direccion de memoria, no es necesario poner nombre de variable

int main(){
    int totalSeg, horas, min, seg;

    cout<<"Digite el tiempo en segundos: "; cin>>totalSeg;
    Tiempo(totalSeg, horas, min, seg);

    cout<<"Tiempo en horas, min, seg: "<<endl;
    cout<<horas<<" : "<< min <<" : "<< seg<<endl;

    return 0;
}

void Tiempo(int totalSeg,int& horas,int& min,int& seg){ // usamos direccion de memoria
    horas = totalSeg/3600; //obtengo horas dividiendo en 3600
    totalSeg %= 3600; // obtengo los segundos que quedarian
    min = totalSeg /60;
    seg = totalSeg%60;

}

