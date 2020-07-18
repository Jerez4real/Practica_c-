/*Plantillas de Funcion

Ejemplo: sacar el valor absoluto de un numero.*/

#include<iostream>
using namespace std;

//Prototipo de Funcion
template <class TIPOD> //prefijo de la plantilla, para usar un tipo de dato en general
void mostarAbs(TIPOD numero); //funcion

int main(){

    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostarAbs(num1);
    mostarAbs(num2);
    mostarAbs(num3);
    return 0;
}

template <class TIPOD> //debe ponerse antes de la funcion
void mostarAbs(TIPOD numero){ //funcion
    if(numero<0){
        numero = numero * -1;
    }
    cout<<"El valor absoluto del numero es: "<<numero<<endl;
}