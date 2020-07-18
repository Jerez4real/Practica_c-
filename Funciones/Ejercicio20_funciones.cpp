/*realice una funcion recursiva para la serie fibonacci: Nota: la serie de fibonacci esta formada por la secuencia de nuemeros: 0,1,1,2,3,5,8,13,21...

    fibonacci(n) = n                                 , si n<2
                    fibonaccio(n+1) + fibonacci(n+2) , si n>=2 
    */
#include<iostream>
using namespace std;

//prototipo de la funcion
int Fibonacci(int);

int main(){

    int nElementos;

    do{
        cout<<"Digite el numero de elementos: "; cin>>nElementos;
    }while(nElementos <= 0);

    for(int i=0; i <nElementos; i++){
        cout<<Fibonacci(i)<<" ";
    }
    cout<<endl;
    /*int num;
    int res_act=1, res_ant=0, aux;
    for (int i = 0; i <= 3; i++)
    {
        cout<< res_ant<<" ";
        aux = res_act; // 3 5 8
        res_act = res_act + res_ant; //3+2 = 5, 5+3=8, 8+5=13
        res_ant = aux; // 3 5
        
    }*/

    return 0;
}

int Fibonacci(int n){
    int aux;
    if(n < 2){
        return n;
    }else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}