#include <stdio.h>

int rectangulo(int i, int j);
int main(){
	int fila;
	int columna;
	printf("Inserte numero de filas: ");
	scanf("%d", &fila);
	printf("Inserte numero de columnas: ");
	scanf("%d", &columna);
	int i=0;
	int j=0;
	for(i=0; i<fila; i++){
		for(j=0; j<columna; j++){
			printf("*");
		}
		printf("\n");
	}
}

