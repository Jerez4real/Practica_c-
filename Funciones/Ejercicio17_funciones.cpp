/*Suma de numeros complejos:
z1 = 5-3i , z2 = -4+2i
z1+z2   = (5-3i) + (-4+2i)
        = 5-3i-4+2i
        = 1-i
*/

#include<iostream>
using namespace std;

struct Complejo
{
    float real, imaginaria;
}z1, z2;

//prototipo funciones
void PedirDatos();
Complejo SumaImaginarios(Complejo, Complejo); //tipo struct por que va a retornar los dos campos
void Imprime(Complejo);

int main(){
    PedirDatos();
    Complejo x = SumaImaginarios(z1,z2); // creo una variable de tio estructura para almacenar los dos datos recibidos
    Imprime(x);
    
    return 0;
}

void PedirDatos(){
    cout<<"Primer numero complejo: "<<endl;
    cout<<"Ingrese la parte real: "; cin>>z1.real;
    cout<<"Ingrese la parte Imaginaria: "; cin>>z1.imaginaria;

    cout<<"\nSegundo numero complejo: "<<endl;
    cout<<"Ingrese la parte real: "; cin>>z2.real;
    cout<<"Ingrese la parte Imaginaria: "; cin>>z2.imaginaria;
}

Complejo SumaImaginarios(Complejo num1,Complejo num2){
    
    num1.real+=num2.real; //suma reales almacenado en num1
    num1.imaginaria+=num2.imaginaria; // suma imaginarios almacenado en num2

    return num1; // retorno num1 ya que en esta estructura se estan guardando los dos valores
}

void Imprime(Complejo x){
    if(x.imaginaria >= 0){
        cout<<"\nResultado de la suma: "<<x.real<<" + "<<x.imaginaria<<'i'<<endl; 
    }else
    {
        cout<<"\nResultado de la suma: "<<x.real<<" - "<<x.imaginaria*-1<<'i'<<endl; //multiplico por -1 para quitar el signo del numero, y que solo se muestre el signo de la operacion
    }
    
}

