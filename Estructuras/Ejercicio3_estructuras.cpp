/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos del empleado con mayor y menor salario*/

#include<iostream>
#include<string.h>
using namespace std;

struct alumno
{
    char nombre[20];
    float salario;
}emp[100];

int main(){
    int n_empleados=0, posicion_mayor, posicion_menor;
    float mayor_salario=0, menor_salario=9999;

    cout<<"Digite el numero de empleados: "; cin>>n_empleados;
    cout<<endl;
    
    for (int i = 0; i < n_empleados; i++)
    {
        cin.ignore();
        cout<<"Digite su nombre: "; cin.getline(emp[i].nombre,20,'\n');
        cout<<"Digite su salario: "; cin>>emp[i].salario;
        cout<<endl;

        if(emp[i].salario > mayor_salario){
            mayor_salario = emp[i].salario;
            posicion_mayor  = i;
            
        }else if(emp[i].salario < menor_salario){
            menor_salario = emp[i].salario;
            posicion_menor = i;
        }
    }

    cout<<"empleado con mayor salario: "<<endl;
    cout<<"Nombre: "<<emp[posicion_mayor].nombre<<endl;
    cout<<"Salario: "<<emp[posicion_mayor].salario<<endl;
    
    cout<<"\nempleado con menor salario: "<<endl;
    cout<<"Nombre: "<<emp[posicion_menor].nombre<<endl;
    cout<<"Salario: "<<emp[posicion_menor].salario<<endl;

    return 0;
}