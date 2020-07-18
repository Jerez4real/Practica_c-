/* Realice un programa que calcule el producto de dos matrices cuadradas de 3x3 donde se multiplican filas por columnas y se suma para obtener el valor de cada espacio*/

#include<iostream>
using namespace std;

int main(){

    int matriz1[3][3]={{1,-1,1},{2,2,3},{-2,-3,-1}};
    int matriz2[3][3]={{1,0,4},{0,2,5},{1,3,0}};
    int multiplicacion[3][3];

    // Operaciones entre las matrices
    for (int i = 0; i < 3; i++)//filas
    {
        for (int j = 0; j < 3; j++)//columnas
        {
            multiplicacion[i][j] = 0;
            for (int k = 0; k < 3; k++) //
            {
                multiplicacion[i][j] = multiplicacion[i][j] + (matriz1[i][k] * matriz2[k][j]);
                //             (0,0) =                (0,0) + (        (0,0) *         (0,0)) => 0+1*1 = 1
                //             (0,0) =                (0,0) + (        (0,1) *         (1,0)) => 1+(-1)*0 = 1
                //             (0,0) =                (0,0) + (        (0,2) *         (2,0)) => 1+1*1 = 2 ******
                //             (0,1) =                (0,1) + (        (0,0) *         (0,1)) => 0+1*0 = 0
                //             (0,1) =                (0,1) + (        (0,1) *         (1,1)) => 0+(-1)*2 = -2
                //             (0,1) =                (0,1) + (        (0,2) *         (2,1)) => -2+(1)*3 = 1 *******
                //             (0,2) =                (0,2) + (        (0,0) *         (0,2)) ......
                //               .   =                  .   +            .   *           .  
                //               .   =                  .   +            .   *           .  
                //               .   =                  .   +            .   *           .  
                //             (2,2) =                (2,2) + (        (2,2) *         (2,2)) ........
            }
        }
    }

    //imprimo la matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<multiplicacion[i][j]<<' '<<' ';  //imprimir suma de matrices 
        }
        cout<<endl;
    }
    

    return 0;
}