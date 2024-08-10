#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombreC[20];
    float importe;

}totalRecaudado;

void max(int matriz[][4], int maximo[])
{
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<5;i++)
        {
            if(matriz[i][j]>maximo[j])
            {
                maximo[j]=i;
            }
        }
    }

}
void carga(int matriz[][4])
{
    int nroC;
    int nroChofer;
    int nroCliente;
    float kmRecorridos;

    printf("\tA continuacion ingrese los datos:\n");
    puts("NUMERO DE COMPROBANTE: ");
    scanf("%d",&nroC);

    while(nroC!=0)
    {
        puts("NUMERO DE CHOFER:(de 1 a 5) ");
        scanf("%d",&nroChofer);
        while(nroChofer>5)
        {
            puts("Nro de chofer incorrecto, ingrese de nuevo: ");
            scanf("%d",&nroChofer);
        }
        puts("NUMERO DE CLIENTE:(de 1 a 4) ");
        scanf("%d",&nroCliente);
        while(nroCliente>4)
        {
            puts("Nro de cliente incorrecto, ingrese de nuevo: ");
            scanf("%d",&nroCliente);
        }
        puts("KMs RECORRIDOS: ");
        scanf("%f",&kmRecorridos);

        matriz[nroChofer-1][nroCliente-1]+=kmRecorridos;

        printf("\n");
        puts("NUMERO DE COMPROBANTE: ");
        scanf("%d",&nroC);
    }

}

int main()
{
    char nombres[5][20]={"Juan P.","Pablo G.","Jose M.","Carlos FF.","Pepe A."};
    int matrizMax[5][4]={0};//matriz acumuladora de kms segun los choferes y los clientes.
    int maximo[4]={0};//vector que guarda la posicion en la que esta el max.
    totalRecaudado vectorR[2];//vector de registros

    carga(matrizMax);
    max(matrizMax,maximo);

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",matrizMax[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<4;i++)
    {
        printf("Del cliente %d, el chofer con mas Kms recorridos fue: ",i+1);
        puts(nombres[maximo[i]]);
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            strcpy(vectorR[i].nombreC[j],nombres[j]);
        }
    }

    for(int i=0;i<5;i++)
    {
        puts(vectorR[0].nombreC[i]);
        printf("\n");
    }

    return 0;
}


