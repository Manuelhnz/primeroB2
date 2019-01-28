#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,s,p;
	
	printf ("CALCULADOR DE PERIMETRO Y SUPERFICIE DE UN RECTANGULO\n\n");
	printf("INTROCUCE LA BASE: ");
		scanf("%i",&b);
	printf("INTRODUCE LA ALTURA: ");
		scanf("%i",&a);
   if (b>0)
   {
		if (a>0)
		{
			p=(a+b)*2;
			s=a*b;
			printf("\nPERIMETRO: %i ",p);
			printf("\nSUERFICIE: %i",s);
		}	
		else printf("Error no puede tener lados negativos");
	}
	else printf("Error no puede tener lados negativos");
	return 0;
}
