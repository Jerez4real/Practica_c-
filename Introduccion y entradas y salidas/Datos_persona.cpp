/*3. Realice un prograga que lea de la entrada estandar los siguientes datos de una persona:
            edad: dato de tipo entero
            sexo: dato de tipo caracter
            altura: dato de tipo Real.
    Tras leer los datos,el programa debe mostrarlos en la salida estandar*/

#include<iostream>
using namespace std;

int main(){

    int edad;
    char sexo[10];
    float altura;

    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese su sexo: "; cin>>sexo;
    cout<<"Ingrese su altura en metros: "; cin>>altura;

    cout<<"\nla edad es: "<<edad<<"\nEl sexo es: "<<sexo<<"\nla altura es: "<<altura<<endl;

    return 0;
}