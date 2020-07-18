/*En una clase de 5 alumnos se han realizado 3 examenes y se requiere determinar el numero de: 
    a)Alumnos que aprobaron todos los examenes
    b)Alumnos que aprobaron un examen
    c)Alumnos que aprobaron unicamente el ultimo examen.
Realice un programa que permita la lectura de datos y el calculo de las estadisticas.*/

#include<iostream>
using namespace std;

int main(){

    float nota;
    int i=1,aprobo=0,estudiante_aprobado=0, aprobado_uno=0, ultimo=0,aprobado_ultimo=0;

    while (i<=5) //se repite hasta que esten los 5 estudiantes completos
    {
        cout<<"Alumno #"<<i<<endl;

         for(int i=1; i<=3;i++){ // se repite hasta ingresar las tres notas

            cout<<"Ingrese sus notas: "; cin>>nota;

            if(nota>=3.0){
                aprobo++;
            }
            if(i==3 && nota>=3.0){ // ultima iteracion del for igual a ultimo examen 
                ultimo++;
            }
        }

        if(aprobo==3){ // si aprobo es = a 3, entonces los tres examenes fueron aprobados
            estudiante_aprobado++;
        }else if(aprobo==1){ // si solo aprobo 1
            aprobado_uno++;
        }
        if(aprobo==1 && ultimo==1){ // si solo aprobo 1 y fue el ultimo
            aprobado_ultimo++;
        }

        aprobo=0;
        ultimo=0;
        i++;
    }
    
    cout<<"Estudiantes que aprobaron todos los examenes: "<<estudiante_aprobado<<endl;
    cout<<"Estudiantes que aprobaron solo un examen: "<<aprobado_uno<<endl;
    cout<<"Estudiantes que aprobaron solo ultimo examen: "<<aprobado_ultimo<<endl;


    return 0;
}