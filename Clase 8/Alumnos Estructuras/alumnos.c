#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <alumnos.h>

void inicializarAlumnos (eAlumno lista*, int tam, int estado)
{
    int i;
    for(i = 0; i < tam; i++)
    {

        lista[i].estado = estado;
    }
}

void mostrarAlumno(eAlumno listado*, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(listado)
    }
}

void cargarListado(eAlumno listado*, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        listado[i] = cargarAlumno();
        listado[i].estado = OCUPADO;
    }
}

int buscarEspacio(eAlumno*, int tam)
{
    int indice = -1;
    int i;

    for(i = 0; i < tam; i++)
    {
        if(listado[i].estado == VACIO)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

void cargarAlumnoEnListado(eAlumno listado*, int tam)
{
    int indice;
    int encontro = 0;

    indice = buscarEspacio(listado, tam);

    if(indice != -1)
    {
        listado[indice] = cargarAlumno();
        listado[indice].estado = OCUPADO;
        encontro = 1;
    }

    return encontro;
}

eAlumno cargarAlumno()
{
    eAlumno miAlumno;

    printf("Ingrese el legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese su direccion: ");
    fflush(stdin);
    gets(miAlumno.direccion);

}

int borraAlumno(eAlumno listado*, int tam)
{
    int legajo;
    int i;

    printf("Ingrese el legajo: ");
    scanf("%d", &legajo);

    for(i = 0; i < tam; i++)
    {
        if(legajo == listado[i].legajo)
        {
            listado[i].estado = ELIMINADO;
            encontro = 1;
            break;
        }
    }
}
