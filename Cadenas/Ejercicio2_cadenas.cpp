/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres */

 #include<iostream>
 #include<string.h> //cadenas 
 using namespace std;

 int main(){

    char palabra[20];
    char palabra2[20];

    cout<<"Ingrese una cadena de caracteres: "; cin.getline(palabra,20,'\n'); //guardo la cadena

    strcpy(palabra2,palabra);

    cout<<palabra2<<endl;

    return 0;
 }