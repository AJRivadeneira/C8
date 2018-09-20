#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define A 5

void initializarVector(int*, int, int);
int buscarLibre(int*, int, int);

int main()
{
    int array[A];
    int i;
    /*int flag = 0;*/
    char seguir;
    int indice;

    initializarVector(array, A, -1);

    do
    {
        indice = buscarLibre(array, A, -1);
        if(indice != -1)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &array[indice]);
        }

        else
        {
            printf("No hay lugar");
            break;
        }

        printf("Desea ingresar otro?");
        seguir = getche();
    }
    while(seguir == 's');

    return 0;
}

void initializarVector(int* vector, int tam, int inic)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        vector[i] = -1;
    }
}

int buscarLibre(int* vector, int tam, int valor)
{
    int indice = -1;
    int i;

    for(i = 0; i < tam; i++)
    {
        if(vector[i] == valor)
        {
            indice = valor;
            break;
        }
    }

    return indice;
}
