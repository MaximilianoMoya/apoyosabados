#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int acumNegativos = 0;
    int acumPositivos = 0;
    int contNegativos = 0;
    int contPositivos = 0;
    int contCeros = 0;
    int contPares = 0;
    float promedioPos= 0;
    float promedioNeg = 0;
    char respuesta = 's';
    int maximo;
    int minimo;
    int diferencia;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    do{
        if(numero > 0)
        {
            contPositivos++;
            acumPositivos=acumPositivos+numero;
        }
        else if(numero < 0)
        {
            contNegativos++;
            acumNegativos=acumNegativos+numero;
        }
        else
        {
            contCeros++;
        }

        if (numero % 2 == 0)
        {
            contPares++;
        }

        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &respuesta);

    }while(respuesta=='s');


    if(contNegativos != 0)
    {
        promedioNeg=acumNegativos/contNegativos;
    }
    if(contPositivos != 0)
    {
        promedioPos=acumPositivos/contPositivos;
    }

    diferencia=contPositivos-contNegativos;

    printf("Suma de los negativos: %d \n", acumNegativos);
    printf("Suma de los positivos: %d \n", acumPositivos);
    printf("Cantidad de positivos: %d \n", contPositivos);
    printf("Cantidad de negativos: %d \n", contNegativos);
    printf("Cantidad de ceros: %d \n", contCeros);
    printf("Cantidad de numeros pares: %d \n", contPares);
    printf("Promedio de positivos: %f \n", promedioPos);
    printf("Promedio de negativos: %f \n", promedioNeg);
    printf("Diferencia entre positivos y negativos: %d \n", diferencia);


    return 0;
}
