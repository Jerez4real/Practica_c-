/*realice una funcion recursiva que sume los primeros n enteros positivos. Nota: para plantear la funcion recursiva tenga encuenta que la suma puede expresarse mediante la siguiente recurrencia:

    suma(n) = 1             , si n=1
                n+suma(n-1) , si n>1
    */
#include<iostream>
using namespace std;

//prototipo de la funcion
int suma(int);

int main(){

    int num;
    do{
        cout<<"hasta que numero va ir la suma: "; cin>>num;
    }while(num <= 0);

    cout<<"La suma es: "<<suma(num)<<endl;

    return 0;
}

int suma(int n){
    if(n==1){
        n = 1;
    }else
    {
        n = n + suma(n-1); // 3 + (2 + (1))
    }
    return n;
}