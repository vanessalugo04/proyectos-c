#include <stdio.h>
//Programa ordenar letras Vanessa Lugo
int ordenar (char *arreglo, int longitud);
int main() {
    char cadena[100]; 
    printf("Ingresa una cadena menor a 20: ");
    scanf("%s", cadena);

    int longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }

    ordenar(cadena, longitud);
    printf("Orden de A a Z: %s\n", cadena);

    return 0;
}
//Burbuja
int ordenar(char *arreglo, int longitud) 
{
    int i, j;
    char temp;

    for (i = 0; i < longitud - 1; i++) {
        for (j = i + 1; j < longitud; j++) {
            if (*(arreglo + i) > *(arreglo + j)) {
                temp = *(arreglo + i);
                *(arreglo + i) = *(arreglo + j);
                *(arreglo + j) = temp;
            }
        }
    }
return 0;
}


