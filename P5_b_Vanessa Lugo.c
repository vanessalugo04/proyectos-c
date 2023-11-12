#include <stdio.h>

int main() {
	//Programa de contenido de apuntadores Vanessa Lugo
  char cadena[]="HelloWorld" ;
  char cad[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char *c ="Hola" ;
  char *cptr = & cadena [0];
  char *cptr2 = & cad [0];
  char *cptr3 = c;
  
   
  while (*cptr != '\0'){
  printf ("\ncontenido cadena: %c", *cptr );
    cptr ++;  
   } 
     
  while (*cptr2 != '\0') {
    printf("\ncontenido cad: %c", *cptr2);
    cptr2++;
  }
  while (*cptr3 !='\0'){
  	printf ("\ncontenido puntero c: %c", *cptr3 );
  	cptr3++;
  }

  return 0;
}
