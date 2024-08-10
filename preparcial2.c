#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char cadena[30];
typedef struct
{
    int cod;
    int pre;
    cadena nom;
    int por;
}datos;
void porcentaje (int [3][5],char [3][20],datos vec[3]);
void perfecta (datos vec[3],int);
void tarde (datos vec[3],int [3][5],char [3][20]);

int main()
{
    int presente=0;
    char nombres [3][20]={"luz","soledad","carla"};
    int llegada [3][5]={{1,3,1,2,3},
                        {1,1,1,1,1},
                        {2,3,1,2,1}};
    datos alumnos[3];
    porcentaje(llegada,nombres,alumnos);
    printf("codigo de alumno\tnombre y apellido\tporcentaje de asistencias\n");
    for(int i=0;i<3;i++)
    {
    printf("%d \t                   %s \t                   %d \n",alumnos[i].cod,nombres[i],alumnos[i].por);
    }
    perfecta(alumnos,presente);
    printf("el alumno con asitencia perfecta es %s\n",nombres[presente]);
    tarde(alumnos,llegada,nombres);

    return 0;
}
void porcentaje (int l[3][5],char m[3][20],datos vec[3])
{

    int tar[3]={0};
    int tar1[3]={0};
    int acum[3]={0};
    for(int i=0;i<3;i++)
    {
        vec[i].pre=0;
        printf("ingrese el codigo del alumno: ");
        scanf("%d",&vec[i].cod);
        for (int j=0;j<5;j++)
        {
            if(l[i][j]==1)
                vec[i].pre=vec[i].pre+1;
                else
                    if(l[i][j]==2)
                        tar[i]=tar[i]+1;
        }
        if(tar>=2)
        {
            while(tar<=2)
            {
                tar1[i]=tar1[i]+1;
                tar[i]=tar[i]-2;
            }
        }
        acum[i]=vec[i].pre+tar1[i];
        vec[i].por=(acum[i]*100)/5;
    }
}
void perfecta (datos vec[3],int n)
{
    for(int i=0;i<3;i++)
    {
            if(vec[i].pre<vec[i+1].pre)
            {
                n=i+1;
            }
                else
                {
                    n=i;
                }
    }
}
void tarde (datos vec[3],int t[3][5],char n[3][20])
{
    int a;
    int b=0;
    printf("ingrese el codigo del alumno");
    scanf("%d",&a);
    for (int i=0;i<3;i++)
    {
        if(a==vec[i].cod)
        {
            for(int j=0;j<5;j++)
            {
                if(t[i][j]==3)
                    b=b+1;
            }
            printf("el alumno %s tiene en total %d llegadas tardes",n[i],b);
        }
    }
}

