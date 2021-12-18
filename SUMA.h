#include<stdio.h>

int main ()
{
	int x,y, resultado;
	
	printf("Ingrese el primer numero: ");
	scanf("%i", &x);
	printf("Ingrese el segundo numero: ");
	scanf("%i", &y);
	resultado= x+y;
	printf("El resultado de la suma es %i", resultado);
	return 0;
}
