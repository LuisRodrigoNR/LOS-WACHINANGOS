<<<<<<< HEAD
hola
#include <stdio.h>
=======
#include <stdio.h>
#include "SUMA.h"
#include "Division.h"
#include "Resta.h"
#include "Multiplicacion.h" 

int main()

{
int numero,x,y,resultado,a,b;

float numerador,denominador;

 

printf("Programa que realiza operaciones multiples\n");

 

printf("Escriba el numero para la operación que quiere realizar\n");

 

printf("1 para suma\n");

 

printf("2 para resta\n");

 

printf("3 para division\n");

 

printf("4 para multiplicacion\n");

 

 

scanf_s("%i",&numero);

 

 

switch(numero)

{

case 1:

 

printf("BIENVENIDO AL PROGRAMA DE SUMA\n");

printf("HELAO?\n");

printf("Digite el primer numero a sumar\n");

scanf_s("%i",&x);

printf("Digite el segundo numero a sumar\n");

scanf_s("%i",&y);

 

resultado=SUMA(x,y);

 

printf("EL resultado es:%i",resultado);

 

break;

 

case 2:

printf("BIENVENIDO AL PROGRAMA DE resta\n");

printf("HELAO?\n");

printf("Digite el primer numero a restar\n");

scanf_s("%i",&x);

printf("Digite el segundo numero a restar\n");

scanf_s("%i",&y);

resultado=Resta(a,b);

printf("EL resultado es:%i",resultado);

 

break;

 

case 3:

printf("BIENVENIDO AL PROGRAMA DE DIVISION\n");

printf("HELAO?\n");

printf("Digite el dividendo\n");

scanf_s("%f",&numerador);

printf("Digite el divisor\n");

scanf_s("%f",&denominador);

 

resultado=dividir(x,y);

 

printf("EL resultado es:%i",resultado);

 

break;

 

case 4:

printf("BIENVENIDO AL PROGRAMA DE MULTIPLICACION\n");

printf("HELAO?\n");

printf("Digite el primer numero a sumar\n");

scanf_s("%i",&x);

printf("Digite el segundo numero a sumar\n");

scanf_s("%i",&y);

resultado=Multiplicacion(x,y);

printf("EL resultado es:%i",resultado);

break;

}

return 0;

}
>>>>>>> ce194c9f29f6bf64699f3634bf01d6f74f459917
