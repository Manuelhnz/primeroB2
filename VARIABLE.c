#include <stdio.h>
#include <stdlib.h>

//Variable estatica

int suma (int n1, int n2)
{
	int res = n1+n2;
	return (res);
}
int Acum (int m1)
{
	static acum = 0; //SE DEBE INICIAR O INICIALIZAR
	acum = acum + m1;
	return acum;
}

int main (int argc, char *argv[])
{
	int a=3, b=8, c;
	// c= suma (a, b);
	//printf ("La suma de %i + %i = %i",a, b, c);
	
	c = Acum (a);
	printf ("\nSe ha acumulado %i y queda %i.", a, c);
	c = Acum (4);
	printf ("\nSe ha acumulado %i y queda %i.", 4, c);
	c = Acum (b);
	printf ("\nSe ha acumulado %i y queda %i.", b, c);
	return 0;
	
	
	
	
}





