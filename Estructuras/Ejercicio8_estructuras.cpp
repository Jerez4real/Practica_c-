/*Defina una estructura que sirva para representar a una persona. la estructura debe contener dos campos: el nombre de la persona y un valor de tipo logico que indica si la persona tiene algun tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad*/

#include<iostream>
#include<string.h>
using namespace std;

struct persona{
    char nombre[20];
    bool discapacidad; //1 = true, 0 = false
}personas[100], sind[100], con[100]; 

int main(){
    int n_personas,j=0, k=0;
    cout<<"numero de personas: "; cin>>n_personas;
    for (int i = 0 ; i < n_personas; i++)
    {
        cin.ignore();//borrar buffer
        cout<<"\nIngrese Nombre: "; cin.getline(personas[i].nombre,20,'\n');
        cout<<"Tiene discapacidad [1/0]: "; cin>>personas[i].discapacidad;
        if(personas[i].discapacidad == 1){
            strcpy(con[j].nombre, personas[i].nombre); // para copiar caracteres en otro arreglo usar strcpy
            j++; //aumento iterador j
        }else if(personas[i].discapacidad == 0){
            strcpy(sind[k].nombre, personas[i].nombre); // para copiar caracteres en otro arreglo usar strcpy
            k++; //aumento iterador j
        }
    }

    cout<<"\nPersonas con discapacidad: "<<endl;
    for (int i = 0; i < j; i++)
    {
        cout<<con[i].nombre<<endl;
    }

    cout<<"\nPersonas sin discapacidad: "<<endl;
    for (int i = 0; i < k; i++)
    {
        cout<<sind[i].nombre<<endl;
    }

    return 0;
}