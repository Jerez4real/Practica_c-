/*Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla. */

 #include<iostream>
 #include<string.h> //cadenas 
 using namespace std;

 int main(){

     char palabra[20];
     int longitud=0;

     cout<<"Ingrese una cadena de caracteres: "; cin.getline(palabra,20,'\n'); //guardo la cadena

     longitud = strlen(palabra);//guardo la longitud

     if(longitud>10){ //evaluo la longitud
         cout<<palabra<<endl;
     }else
     {
         cout<<"La cadena no supera 10 caracteres";
     }
     

     return 0;
 }