#include <stdio.h>
#include <stdlib.h>
void mostrar(int);
void main()
{ int valor=2;
printf ("Antes de llamar a la funcion: %d\n",valor);
mostrar(valor);
printf ("Luego de llamar a la funcion: %d\n",valor);
return 0;
}
void mostrar(int valor)
{ valor=5;
printf("El valor dentro de la funcion: %d\n",valor);
}


