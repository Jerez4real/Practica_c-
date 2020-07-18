/*Estructura Anidadas*/

#include<iostream>
using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2]; //array -> es decir que se van a tener 2 estructura del tipo empleados

int main(){
    
    for(int i=0; i<2; i++){
        
        cout<<"Digite su nombre: "; cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su direccion: "; cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
        cout<<"Ciudad: "; cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Provincia: "; cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Salario: "; cin>>empleados[i].salario;
        cout<<endl;
        cin.ignore(); //vaciar buffer y permitir digitar los valores(la memoria se llena muy rapido con cadenas)
    }

    //imprimiendo los datos
    for (int i = 0; i < 2; i++)
    {
        cout<<"\nNombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provinvia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
    }
    

    return 0;
}