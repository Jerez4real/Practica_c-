/*escriba una funcion en llamada mayor() que devuelva la fecha mas reciente de cualquier par de fechas que se le transmitasn. por ejemplo, si se transmiten las fechas 10/09/2005 y 11/3/2015 a mayor(), sera devuelta la segunda fecha.
*/

#include<iostream>
using namespace std;

struct Fecha
{
    int year, mes, dia;
}fecha1, fecha2;

//prototipo funciones
void PedirDatos();
Fecha Mayor(Fecha, Fecha); //tipo struct por que va a retornar los dos campos
void Imprime(Fecha);

int main(){
    PedirDatos();
    Fecha x = Mayor(fecha1,fecha2); // creo una variable de tio estructura para almacenar los dos datos recibidos
    Imprime(x);
    
    return 0;
}

void PedirDatos(){
    cout<<"Primer Fecha: "<<endl;
    cout<<"Ingrese el año: "; cin>>fecha1.year;
    cout<<"Ingrese el mes: "; cin>>fecha1.mes;
    cout<<"Ingrese el dia: "; cin>>fecha1.dia;

    cout<<"\nSegunda Fecha: "<<endl;
    cout<<"Ingrese el año: "; cin>>fecha2.year;
    cout<<"Ingrese el mes: "; cin>>fecha2.mes;
    cout<<"Ingrese el dia: "; cin>>fecha2.dia;
}

Fecha Mayor(Fecha f1,Fecha f2){

    if(f1.year > f2.year){
        return f1;
    }else if( ( f1.year == f2.year) && (f1.mes > f2.mes)){
        return f1;
    }else if(( f1.mes == f2.mes) && (f1.dia > f2.dia)){
        return f1;
    }else{
        return f2;
    }

}

void Imprime(Fecha x){

    cout<<"\nFecha mas reciente: "<<x.dia<<"/"<<x.mes<<"/"<<x.year<<endl; 

}

