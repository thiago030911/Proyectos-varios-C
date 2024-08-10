//Ingresar dos números A y B y desarrollar una función void que reciba como
//parámetros de entrada dichos números, que permita dejar en A el número más
//grande, y lo retorne al programa principal con el cambio realizado.
#include<stdio.h>
void funcion(int , int );
int main ()
{
int a,b;
printf("ingrese un numero\n");
scanf("%d",&a);
printf("ingrese un numero\n");
scanf("%d",&b);
funcion(a,b);
printf("los numeros son:%d  %d ",a,b);


return 0;
}
void funcion(int x, int y )
{
while(x<y)
{
    x=x+1;
}
}
