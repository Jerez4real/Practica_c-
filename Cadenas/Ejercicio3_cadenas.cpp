/*Pedir al usuario que digite dos cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente */

 #include<iostream>
 #include<string.h> //cadenas 
 using namespace std;

 int main(){

   char palabra[20];
   char palabra2[20];

   cout<<"Ingrese una cadena de caracteres: "; cin.getline(palabra,20,'\n'); //guardo la cadena
   cout<<"Ingrese una cadena de caracteres: "; cin.getline(palabra2,20,'\n'); //guardo la cadena

   if(strcmp(palabra,palabra2)==0){ //iguuales->0 , diferentes->1
      cout<<"Ambas cadenas son iguales"<<endl;
   }else{
      if(strcmp(palabra,palabra2)>0){ // >0 -> primera cadena empieza alfabeticamente con una letra despues de la cadena 2
         cout<<palabra<<" Esta despues alfabeticamente"<<endl;  
      }else{
         cout<<palabra2<<" Esta despues alfabeticamente"<<endl;
      }
   }

   return 0;
 }