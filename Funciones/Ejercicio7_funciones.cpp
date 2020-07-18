/*Intercambiar el valor de 2 variables utilizando paso de parametros por referencia */

#include<iostream>
using namespace std;

//prototipo de funciones
void PedirDatos();
void ValNuevo(int&,int&); //se le agrega & para indicar direccion de memoria, no es necesario poner nombre de variable

//variables globales
int num1, num2;

int main(){

    PedirDatos();
    ValNuevo(num1, num2);

    return 0;
}

void PedirDatos(){
    cout<<"Digite 2 numeros separados por espacio: "; cin>>num1>>num2;
}

void ValNuevo(int& xnum, int& ynum){ // usamos direccion de memoria
    int aux;
    cout<<"El valor del primer numero es: "<< xnum <<endl;
    cout<<"El valor del segundo numero es: "<< ynum <<endl;
    aux=xnum;   
    xnum=ynum;
    ynum=aux;
    cout<<"El nuevo valor del primer numero es "<<xnum<<endl;
    cout<<"El nuevo valor del segundo numero es "<<ynum<<endl;
}

