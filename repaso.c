#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define n 3
typedef struct
{
int Legajo;
int edad;
} datos;
int main ()
{
datos alumnos[n];//Vector de 10 elementos de tipo "datos"
system("cls");
for (int i = 0; i < n; i++) //Ciclo para hacer los 10 ingresos
{
printf("Ingrese el legajo del alumno ");
scanf("%d", &alumnos[i].Legajo);
printf("Ingrese la edad del alumno ");
scanf("%d", &alumnos[i].edad);
}
printf("legajo\tEdad\n ");
//Ciclo para mostrar los 10 registros
for (int i = 0; i < n; i++)
{
printf("%d\t%d \n ", alumnos[i].Legajo, alumnos[i].edad);
}
return 0;
}
