/*Escriba una funcion llamada mult() que acepte dos numeros flotantes como parametros, multipliue estos dos numeros y despliegue el resultado*/

#include<iostream>
//#include<conio.h>// para usar el getch
using namespace std;

//prototipo de la funcion
void pedirDatos(); // no tiene parametros porque solo se utiliza para pedir datos
void mult(float x, float y);

float num1,num2; //variables globales

int main(){

    pedirDatos();
    mult(num1,num2);

    //getch();//para que no se cierre el ejecutable al abrirlo
    return 0; 
}

void pedirDatos(){
    cout<<"Ingrese dos numeros separados por espacio: "; cin>>num1>>num2;
}

void mult(float x, float y){
    float resultado;
    resultado = x*y;
    cout<<"La multiplicacion es: "<<resultado<<endl;
}

