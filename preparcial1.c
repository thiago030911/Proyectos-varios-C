#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char cadena [30];
typedef struct
{
    cadena na;
    int leg;
    int apro;
    float pro;
}datos;
void cargar (datos vec[],int);
void listar (datos vec[],int);
void maximo (datos vec[],int ,int );
void ordenar ();

int main()
{
    int a;
    int mat;
    printf("ingrese la cantidad de registro que se van a leer: ");
    scanf("%d",&a);
    printf("ingrese la cantidad de materias que tiene el colegio: ");
    scanf("%d",&mat);
    datos alumnos [a];
    cargar(alumnos,a);
    listar(alumnos,a);
    maximo(alumnos,a,mat);

    return 0;
}
void cargar (datos vec[],int a)
{
    for(int i=0;i<a;i++){
printf("ingrese el nombre y apellido del alumno: ");
_flushall();
gets(vec[i].na);
printf("ingrese numero de legajo: ");
scanf("%d",&vec[i].leg);
printf("ingrese la cantidad de materias aprobadas: ");
scanf("%d",&vec[i].apro);
printf("ingrese el promedio de calificaciones del alumno: ");
scanf("%f",&vec[i].pro);
    }
}
void listar (datos vec[],int a)
{
    for (int i=0;i<a;i++)
    {
        printf("los datos del alumno %d es: \n",i+1);
        printf("el nombre del alumno es: %s \n",vec[i].na);
        printf("el legajo del alumno es: %d \n",vec[i].leg);
        printf("la cantidad de materias aprobadas son: %d \n",vec[i].apro);
        printf("el promedio del alumno: %f \n",vec[i].pro);

    }
}
void maximo (datos vec[],int n,int m)
{
    int acum=0;
    int acum1=0;
    int max=0;
    int max1=0;
    for (int i=0;i<n;i++)
    {
        if(i+1<=n)
        {
            acum=m-vec[i].apro;
            acum1=m-vec[i+1].apro;
            if(acum==acum1)
            {
                max=i;
                max1=i+1;
            }
            else
            {
                if(acum<acum1)
                    max=i+1;
                else
                    max=i;
            }
        }
    }

    printf("el alumno con el numero maximo de materias aprobadas es: %s\n",vec[max].na);
}
