/*Recursividad
Factorial de un numero 3! = 3*2!
0!=1
factorial(n) = 1                 , si n=0
                n*factorial(n-1) , si n>0
*/

#include<iostream>
using namespace std;

int factorial(int);

int main(){

    int num;
    cout<<"ingrese un numero: "; cin>> num;
    cout<<num<<"!"<<" = "<<factorial(num)<<endl;

    return 0;
}

int factorial(int n){
    if(n==0){ //caso base 
        n = 1;
    }else //caso general
    {
        n = n * factorial(n-1);
    }
    return n;
    
}