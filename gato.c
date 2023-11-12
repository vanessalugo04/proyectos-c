#include <stdio.h>
// Gato Vanessa Lugo
int main() {

  char gato [3][3];
  int i, j, fila, columna, ganador, turno;
for(i=0; i<3; i++)
 {
for(j=0; j<3; j++) {
	gato[i][j]= ' ';
  printf("[%c]", gato[i][j]);
}
printf("\n");
}

do{
	if (turno%2==1){
	  printf("Jugador 2 digite fila: ");
  scanf("%d", &fila);
  printf("Jugador 2 digite columna: ");
  scanf("%d", & columna);
  gato[fila][columna] ='X' ; 
  printf("0.  1.  2\n");
  for(i=0; i<3; i++){
for(j=0; j<3; j++) {
  printf("[%c]", gato[i][j]);
}
  printf("\n");       
 }	
 turno ++;
 if (gato[0][0]== 'X' && gato [0][0]==gato [0][1] && gato [0][0] == gato[0][2]
|| gato[1][0]== 'X' && gato [1][0]==gato [1][1] && gato [1][0] == gato[1][2]
|| gato[2][0]== 'X' && gato [2][0]==gato [2][1] && gato [2][0] == gato[2][2]
|| gato[0][0]== 'X' && gato [0][0]==gato [1][0] && gato [0][0] == gato[2][0]
|| gato[0][1]== 'X' && gato [0][1]==gato [1][1] && gato [0][1] == gato[2][1]
|| gato[0][2]== 'X' && gato [0][2]==gato [1][2] && gato [0][2] == gato[2][2]
|| gato[0][0]== 'X' && gato [0][0]==gato [1][1] && gato [0][0] == gato[2][2]
|| gato[0][2]== 'X' && gato [0][2]==gato [1][1] && gato [0][0] == gato[2][0]){
	ganador=2;
	printf("Jugador 2 gano");
}
	}   else if(turno%2==0){
		 printf("Jugador 1 digite fila: ");
  scanf("%d", &fila);
  printf("Jugador 1 digite columna: ");
  scanf("%d", & columna);
  gato[fila][columna] ='O' ; 
  printf("0.  1.  2\n");
  for(i=0; i<3; i++){
for(j=0; j<3; j++) {
  printf("[%c]", gato[i][j]);
	}
	printf("\n");
}
turno++;
} 
if (gato[0][0]== 'X' && gato [0][0]==gato [0][1] && gato [0][0] == gato[0][2]
|| gato[1][0]== 'X' && gato [1][0]==gato [1][1] && gato [1][0] == gato[1][2]
|| gato[2][0]== 'X' && gato [2][0]==gato [2][1] && gato [2][0] == gato[2][2]
|| gato[0][0]== 'X' && gato [0][0]==gato [1][0] && gato [0][0] == gato[2][0]
|| gato[0][1]== 'X' && gato [0][1]==gato [1][1] && gato [0][1] == gato[2][1]
|| gato[0][2]== 'X' && gato [0][2]==gato [1][2] && gato [0][2] == gato[2][2]
|| gato[0][0]== 'X' && gato [0][0]==gato [1][1] && gato [0][0] == gato[2][2]
|| gato[0][2]== 'X' && gato [0][2]==gato [1][1] && gato [0][0] == gato[2][0]){
	ganador=1;
	printf("Jugador 1 gano");
}
} while (ganador != 1);
 return 0;
}

