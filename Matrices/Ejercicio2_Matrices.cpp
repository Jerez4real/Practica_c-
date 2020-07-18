/* Hacer un programa que defina una matriz 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz*/

#include<iostream>
using namespace std;

int main(){

    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout<<"Matriz original: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
                cout<<matriz[i][j]<<' ';//imprimir matriz completa
        }
        cout<<endl;
    }

    /*mostrar Diagonal: *
                          *
                            *
    */
    cout<<"Diagonal Principal: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            if(i==j){ // solo imprime si posicion fila y columna es igual (diagonal)
                if(j==1){
                    cout<<' '<<' '; //en la posicion 1,0 se agrega un espacio en blanco
                }else if(j==2){
                    cout<<' '<<' '<<' '<<' '; //en las posiciones 2,0 y 2,1 se agrega espacio en blanco
                }
                cout<<matriz[i][j]<<' '; // imprimir matriz s
            }
        }
        cout<<endl;
    }

    /*mostrar:  * 
                * *
                * * *
    */
    cout<<"Triangulo: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            if(i==0){ //si es la primera fila, solo mostrar la primera columna
                cout<<matriz[i][j]<<' ';
                j=2; // terminar iteracion para no mostrar la columna 2 y 3 de la fila 1
            }else if(i==1){
                cout<<matriz[i][j]<<' '; 
                if (j==1) // imprimo normal la matriz hasta la columna 2 y le indico que se salte una iteracion para no imprimir el ultimo valor
                {
                    j=2;
                }
            }else{
                cout<<matriz[i][j]<<' ';// en la ultima fila imprimo todas las columnas
            }
        }
        cout<<endl;
    }

    /*mostrar Diagonal version 2: *
                                    *
                                      *
    
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            if(i==0){ // solo imprimo valor de fla 1 y columna 1 
                cout<<matriz[i][j]<<' ';
                j=2;
            }else if(i==1){ // solo imprimo valor de fila 2 y columna 2
                if(j==0){
                   cout<<' '<<' '; // espacio en blanco para fila 2 - columna 1
                }
                else{
                    cout<<matriz[i][j]<<' '; // imprimo valor de fila 2 y columna 2 
                    j=2; // salto una iteracion y no imprimo fila 2 - columna 3
                }
            }else{
                if(j==0 || j==1){ // para fila 3 - columna 1 y fila 3 - columna 2 imprimo espacio en blanco
                    cout<<' '<<' '; 
                }else{
                    cout<<matriz[i][j]<<' '; // para fila 3 - columna 3 imprimo valor
                }  
            }
        }
        cout<<endl;
    }*/

    return 0;
}