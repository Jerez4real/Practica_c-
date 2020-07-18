#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){

    float a,b,c,d,e,f,resultado;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;

    resultado = (a+(b/(c-d)));
    cout.precision(2);//para redondear el valor del resultado en caso de tener decimales
    cout<<"El resultado es: "<<resultado<<endl;

    return 0;

}