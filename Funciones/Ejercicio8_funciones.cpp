/*Escriba una funcion nombrada cambio() que tenga un parametro en numero entero y seis parametros de referencia en numero entero nombrados cien, cincuenta. veinte, diez, cinco y uno, respectivamente. LA funcion tiene  que considerar el valor entero transmitido como una cantidad en pesos colombianos y convertir el valor en el numero menor de billetes equivalentes. */

#include<iostream>
using namespace std;

//prototipo de funciones
void cambio(int,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&); //se le agrega & para indicar direccion de memoria, no es necesario poner nombre de variable

int main(){
    int valor, cienmil, cincuentamil, veintemil, diezmil, cincomil, dosmil, mil, quinientos, doscientos, cien, cincuenta;

    cout<<"Digite la cantidad en Pesos Colombianos: "; cin>>valor;
    cambio(valor,cienmil,cincuentamil,veintemil,diezmil,cincomil, dosmil, mil, quinientos, doscientos, cien, cincuenta);

    cout<<"Cantidad de billetes y monedas a entregar como cambio: "<<endl;
    cout<<"Cienmil: "<<cienmil<<endl;
    cout<<"Cincuentamil: "<<cincuentamil<<endl;
    cout<<"Veintemil: "<<veintemil<<endl;
    cout<<"Diezmil: "<<diezmil<<endl;
    cout<<"Cincomil: "<<cincomil<<endl;
    cout<<"Dosmil: "<<dosmil<<endl;
    cout<<"mil: "<<mil<<endl;
    cout<<"quinientos: "<<quinientos<<endl;
    cout<<"doscientos: "<<doscientos<<endl;
    cout<<"cien: "<<cien<<endl;
    cout<<"cincuenta: "<<cincuenta<<endl;

    return 0;
}

void cambio(int valor,int& cienmil,int& cincuentamil,int& veintemil,int& diezmil,int& cincomil,int& dosmil,int& mil,int& quinientos,int& doscientos,int& cien,int& cincuenta){ // usamos direccion de memoria
    cienmil = valor/100000; // para saber cuantos billetes de ese valor se necesitan
    valor %= 100000; // sacamos modulo del valor para saber el resto, es decir lo que queda del valor
    cincuentamil = valor /50000;
    valor %= 50000;
    veintemil = valor/20000;
    valor %= 20000;
    diezmil = valor /10000;
    valor %= 10000;
    cincomil = valor/5000;
    valor %=5000;
    dosmil = valor/2000;
    valor %=2000;
    mil = valor/1000;
    valor %= 1000;
    quinientos = valor/500;
    valor %= 500;
    doscientos = valor/200;
    valor %= 200;
    cien = valor/100;
    valor %= 100;
    cincuenta = valor/50;

}

