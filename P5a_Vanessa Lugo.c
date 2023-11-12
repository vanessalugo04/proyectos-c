#include <stdio.h>

int main() {
	//Programa de contenido y tamaño de apuntadores Vanessa Lugo
  char cadena[]="HelloWorld" ;
  char cad[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char *c ="Hola" ;
  char *cptr = & cadena [0];
  char *cptr2 = & cad [0];
  char *cptr3 = c;
  int tam1= sizeof(cadena);
  int tam2= sizeof(cad);
  int tam3= sizeof(c);
   
  while (*cptr != '\0'){
  printf ("\ncontenido cadena: '%c'" , *cptr );
    cptr ++;  
   } 
   printf("\nlongitud cadena: %d\n", tam1);
     
  while (*cptr2 != '\0') {
    printf("\ncontenido cad: '%c'", *cptr2);
    cptr2++;
  }
  printf("\nlongitud cad: %d\n", tam2);
  
  while (*cptr3 !='\0'){
  	printf ("\ncontenido puntero c: '%c'", *cptr3 );
  	cptr3++;
  }
  printf("\nlongitud c: %d\n", tam3);

  return 0;
}
