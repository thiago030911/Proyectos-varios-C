#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
int cod;
int por;
}datos;
void porcentaje (datos vec[3],int[3][5],char[3][20]);
void perfecta (char[3][20],int[3][5]);
void tarde (datos vec[3],int[3][5],char[3][20]);

int main()
{
    datos alumnos [3];
    char nombres [3][20]={"luz","soledad","carla"};
    int llegada [3][5]={{1,3,1,2,3},
                        {1,1,1,1,1},
                        {2,3,1,2,1}};
    porcentaje(alumnos,llegada,nombres);
    perfecta (nombres,llegada);
    tarde (alumnos,llegada,nombres);

    return 0;
}
void porcentaje (datos vec[3],int l[3][5],char n[3][20])
{
int p[3]={0};
int t[3]={0};
int t1[3]={0};
int t2[3]={0};
int t3[3]={0};
for(int i=0;i<3;i++)
{
       printf("ingrese el codigo del alumno \n");
    scanf("%d",&vec[i].cod);
    for(int j=0;j<5;j++)
    {
        if(l[i][j]==1)
            p[i]=p[i]+1;
        else{
            if(l[i][j]==2)
                t[i]==t[i]+1;
        }
        while(t[i]>2)
        {
        if(t[i]>=2)
        {
        t1[i]=t1[i]+1;
        t[i]=t[i]-2;
        }
        }
    }
    t2[i]=p[i]+t1[i];
    t3[i]=t2[i]*100;
    vec[i].por=t3[i]/5;

}
for(int i=0;i<3;i++)
{
    printf("codigo del alumno \t nombre y apellido \t porcentaje de asitencias \n ");
    printf("%d \t %s \t %d \n",vec[i].cod,n[i],vec[i].por);
}

}
void perfecta (char a[3][20],int l[3][5])
{
    int b[3]={0};
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<5;j++)
    {
        if(l[i][j]==1)
            b[i]=b[i]+1;
    }
    }
    printf("nombre y apellido \t asistencia \n");
    for(int p=0;p<3;p++)
    {
    printf("%s \t           %d \n",a[p],b[p]);
    }
}
void tarde (datos vec[3],int l[3][5],char a[3][20])
{
    int b;
    int o=0;
    int t=0;
    printf("ingrese el codigo del alumno");
    scanf("%d",&b);
    for(int i=0;i<3;i++)
    {
        if(vec[i].cod==b)
        {
            for(int j=0;j<5;j++)
            {
                if(l[i][j]==3)
                    t=t+1;
            }
            o=i;

        }
    }
    printf("nombre y apellido \t llegadas tardes \n");
    printf("%s \t %d \n",a[o],t);
}
