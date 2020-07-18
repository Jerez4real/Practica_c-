/*Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos que se transmitan a la funcion cuando es invocada. suponga que los tres argumentos seran del mismo tipo*/

#include<iostream>
using namespace std;

//prototipo de funciones
template <class T> //plantilla
T Maximo(T x,T y,T z);

int main(){

    int num1 = 23,num2 = 123, num3 = 1100;

    cout<<"El numero mayor es: "<<Maximo(num1, num2, num3)<<endl;

    return 0;
}

template <class T>
T Maximo(T x,T y,T z){
    T max; // puede ser cualquier tipo de dato
    if(x>y && x>z){
        max=x;
    }else if(y>x && y>z){
        max=y;
    }else{
        max=z;
    }
    return max;
}

