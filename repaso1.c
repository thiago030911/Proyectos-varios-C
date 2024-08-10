#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef char cadena[100];
typedef struct{
cadena na;
int leg;
int cant;
float pro;
}datos;

void cargar(datos vec[3],int);
void listar(datos vec[3],int);
void maximo(datos vec[3],int,cadena);
int main()
{
datos educativo[3];
int a=0;
int n;
cadena max;

printf("ingrese la cantidad de alumnos\n");
scanf("%d",&a);
printf("ingrese el numero de materias\n");
scanf("%d",&n);
cargar(educativo,a);

listar(educativo,a);

maximo(educativo,a,max);


return 0;
}
void cargar(datos vec[3],int a)
{
for (int i=0;i<a;i++){
    printf("ingrese nombre y apellido\n ");
    _flushall();
    gets(vec[i].na);
     printf("ingrese nro de legajo\n ");
    scanf("%d",&vec[i].leg);
     printf("ingrese cantidad de materias aprobadas\n ");
    scanf("%d",&vec[i].cant);
     printf("ingrese el promedio\n ");
    scanf("%f",&vec[i].pro);

}

}
void listar(datos vec[3],int a)
{
for (int e=0;e<a;e++){
    printf("informe del alumno %d\n",e+1);
    printf("el nombre del alumno es: %s\n",vec[e].na);
    printf("el legajo es: %d\n",vec[e].leg);
    printf("la cantidad de materias aprobadas son: %d\n",vec[e].cant);
    printf("el promedio es: %f\n",vec[e].pro);
    printf("\n\n");

    }
}
void maximo(datos vec[3],int a,cadena max)
{
for (int i=0;i<a;i++){
        if(i<a-1){
    if(vec[i].cant<vec[i+1].cant){
        max=vec[i+1].na;
    }
    else{
        max=vec[i].na;
    }
        }
}
printf("el alumno con la materias aprobadas es: %s \n",max);
}

