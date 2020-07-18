/*Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa*/

#include<iostream>
#include<math.h>//libreria funciones matematicas
using namespace std;

int main(){

    float cateto_opuesto, cateto_adyacente, hipotenusa;

    cout<<"Ingrese el cateto opuesto: "; cin>>cateto_opuesto;
    cout<<"Ingrese el cateto adyacente: "; cin>>cateto_adyacente;

    hipotenusa = sqrt(pow(cateto_adyacente,2) + pow(cateto_opuesto,2));//sqrt= raiz cuadrada , pow=elevar a una potencia

    cout.precision(2);//redondear valor

    cout<<"La hipotenusa es: "<<hipotenusa<<endl;

    return 0;
}