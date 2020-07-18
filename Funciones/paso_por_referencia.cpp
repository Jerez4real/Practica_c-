/*Paso de parametros por referencia: usando las direcciones de memoria*/

#include<iostream>
using namespace std;

//prototipo de funciones
void ValNuevo(int&,int&); //se le agrega & para indicar direccion de memoria, no es necesario poner nombre de variable

int main(){

    int num1, num2;

    cout<<"Digite 2 numeros separados por espacio: "; cin>>num1>>num2;
    ValNuevo(num1, num2);

    cout<<"El nuevo valor del primer numero es "<<num1<<endl;
    cout<<"El nuevo valor del segundo numero es "<<num2<<endl;

    return 0;
}

void ValNuevo(int& xnum, int& ynum){ // usamos direccion de memoria
    cout<<"El valor del primer numero es: "<< xnum <<endl;
    cout<<"El valor del segundo numero es: "<< ynum <<endl;
    
    xnum=2;
    ynum=21;
}

