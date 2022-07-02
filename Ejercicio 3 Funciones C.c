//Ejercicio 3 FUnciones en C
#include <stdio.h>
#include<string.h>
int main (){

	 char Cadena1[10], Cadena2[10], Final[30];
	 
	 printf("\nIngrese caracteres de la cadena1: ");
	 scanf("%s", Cadena1);
	 printf("\nIngrese caracteres de la cadena2: ");
	 scanf("%s", Cadena2);
	 
	 strcat(Final,  Cadena1);
	 strcat(Final,"-");
     strcat(Final,  Cadena2);
     printf("\nLa cadena concatenada es : %s", Final);
	 strrev(Final);
	 printf("\nLa cadena resultante es : %s", Final);
	 return 0;
	}
	 
