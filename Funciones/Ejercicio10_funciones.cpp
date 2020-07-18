/*Escriba una funcion nombrada Calc_años() que tenga un parametro entero que represente el numero total de dias desde la fecha 1/1/2000 y tres parametros de referencia nombrados año, mes y dia respectivamente. LA funcion es calcular el año, mes y dia actual para el numero dado de dias que se le transmitan. Para este problema suponga que cada año tiene 365 dias y cada mes tiene 30 dias. */

#include<iostream>
using namespace std;

//prototipo de funciones
void Calc_year(int,int&,int&,int&); //se le agrega & para indicar direccion de memoria, no es necesario poner nombre de variable

int main(){
    int fecha, years, mes, dia;

    cout<<"Digite el numero de dias: "; cin>>fecha;
    Calc_year(fecha, years, mes, dia);

    cout<<"fecha actual: ";
    cout<< dia+1 <<" / "<< mes+1 <<" / "<< years+2000 <<endl;

    return 0;
}

void Calc_year(int fecha,int& years,int& mes,int& dia){ // usamos direccion de memoria
    years = fecha/365; // dividimos sobre 365 para obtener años
    fecha %= 365; // vamos decrementando la fecha de acuerdo al valor anterior
    mes = fecha /30;
    dia = fecha%30;
}

