#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#define A 7

int main()
{
    int numero[A];
    int maximo;
    int lugar;
    cargarArray(numero, A);
    mostrarArray(numero, A);
    maximo = maximoArray(numero, A);
    lugar = buscarValor(numero, A, 5);
    printf("La poscicion de memoria es: %d",lugar);
    printf("El maximo es: %d", maximo);
    return 0;
}
