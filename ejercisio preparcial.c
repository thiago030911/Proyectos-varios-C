
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char nom [30] ;
    int leg ;
    int apro;
    float cali;

}alumnos;
void cargar ();
void listar ();
void maximo (vector_de_registro,n,max);


int main()
{

    cargar ();
    listar ();
return 0;
}

void cargar ()
{
   alumnos r1[3];
   system("cls");
    for (int i=0;i<3;i++)
    {
    printf("ingrese el nombre");
    scanf("%s",&r1[i].nom );
    printf("ingrese el legajo");
    scanf("%d",&r1[i].leg);
     printf("materias aprobadas");
     scanf("%d",&r1[i].apro);
      printf("ingrese promedio");
      scanf("%f",&r1[i].cali);
    }


}
void listar ()
{
    alumnos r1[3];
    system("cls");

    for (int j=0;j<3;j++)
    {
    printf("nombres del %d estudiantes%s\n",r1[j].nom);


    }
}






