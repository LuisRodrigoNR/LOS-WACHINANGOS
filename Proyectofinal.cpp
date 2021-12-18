#include <stdio.h>

#include "SUMA.h"

#include "Division.h"

 

int main()

{

 

 

int numero,x,y,resultado;

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

 

//pendiente libreria de monse

 

 

resultado=x-y;

printf("EL resultado es:%i",resultado);

 

break;

 

case 3:

printf("BIENVENIDO AL PROGRAMA DE DIVISION\n");

printf("HELAO?\n");

printf("Digite el dividendo\n");

scanf_s("%f",&numerador);

printf("Digite el divisor\n");

scanf_s("%f",&denominador);

 

resultado=DIVISION(x,y);

 

printf("EL resultado es:%i",resultado);

 

break;

 

case 4:

printf("BIENVENIDO AL PROGRAMA DE MULTIPLICACION\n");

printf("HELAO?\n");

printf("Digite el primer numero a sumar\n");

scanf_s("%i",&x);

printf("Digite el segundo numero a sumar\n");

scanf_s("%i",&y);

 

//PENDEINTE libreria gravi

 

resultado=(x*y);

 

printf("EL resultado es:%i",resultado);

break;

}

return 0;

}
