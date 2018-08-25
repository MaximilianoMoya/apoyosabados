#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int contador=0;
    int acumulador =0;
    float promedio;
    int continuar = 1;

    do
    {
        printf("ingresar la edad: ");
        scanf("%d", &edad);

        printf("La edad es: %d \n", edad);
        acumulador=acumulador+edad;
        contador++;

        printf("desea continuar? (1/0):");
        scanf("%d", &continuar);

   } while(continuar);

   promedio=acumulador/contador;
   printf("el promedio es: %.2f", promedio);

   return 0;
}


/*for (i=0; i<3; i++)
    {
        printf("ingresar la edad: ");
        scanf("%d", &edad);

        printf("La edad es: %d \n", edad);

   }*/
