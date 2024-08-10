#include<stdio.h>
int suma (int,int);
int main()
    {
        int a,b,num1,num2;
        printf("ingrese un numero");
        scanf("%d",&num1);
        a=(int)num1;

        printf("ingrese segundo numero");
        scanf("%d",&num2);
        b=(int)num2;

        printf("la suma es: \n %d",suma(a,b));
        printf("la resta es: \n %d",resta(a,b));
        return 0;
    }
int suma (int a,int b)
    {
        return a+b;
    }
int resta (int a,int b)
    {
        return a-b;
    }
