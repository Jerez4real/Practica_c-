/* Ordenamiento por Shell 
    1. Se divide la lista original en n/2 grupos de dos, considerando un incremento o salto entre los elementos de n/2
    2. Se clasifica cada grupo por separado, comparando las parejas de elementos y si no estan ordenados se intercambian
    3. Se divide ahora la lista en la mitad de grupos (n/4), con un salto entre los elementos tambien mitad (n/4), y nuevamente se clasifica cada grupo por separado 
    4. Asi sucesivamente, se sigue dividiendo la lista en la mitad de grupos que en el recorrido anterior con un salto decreciente en la mita que el salto anterior, y luego clasificando cada grupo por separado
    5. El algoritmo termina cuando el tañano del salto es 1.

*/
#include<iostream>
using namespace std;

//
void ordenacionShell(float a[],int); // le paso el arreglo y el numero de elementos del arreglo 
void Intercambio(float &x,float &y);

int main(){
    float arreglo[]={4,6,1,9,5,10,2,11,19,7};
    int tam=10;

    ordenacionShell(arreglo,tam);

    cout<<"orden ascendente: "<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<arreglo[i]<<' ';
    }

    cout<<"\norden descendente: "<<endl;

    for (int i = 9; i >= 0; i--)
    {
        cout<<arreglo[i]<<' ';
    }
    cout<<endl;

    return 0;
}

void ordenacionShell(float a[],int n){
    int salto,i,j,k; //j->limite_inicial k->limite_final
    salto = n/2; //numero de elementos entre 2 - comparar cada n elementos

    while(salto>0){ // los saltos deben ser mayor a 0, si son 0 ya esta ordenado
        for(i=salto; i<n;i++){
            j = i - salto; // correr el limite_inical
            while(j >= 0){
                k = j + salto; // correr el limite_final
                if(a[j] <= a[k]){ //Par de elementos ordenados
                    j = -1; //salir ciclo while
                }else{ //Par de elementos estan desordenados
                    Intercambio(a[j],a[k]);
                    j -= salto;
                }
            }
        }
        salto/=2;
    }
}

void Intercambio(float &x,float &y){
    float aux = x;
    x=y;
    y=aux;
}
