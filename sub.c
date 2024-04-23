#include<stdio.h>
#include<stdlib.h>

void main () {
	int numero1;
	int numero2;
	int resultado;

	printf ("Calculo de Subtração");
	puts("\n Digite um valor:");
	scanf("%d",&numero1);
	printf("\nDigite outro valor:");
	scanf("%d",&numero2);
	resultado = numero1-numero2;
	printf("\n A subtração de %d e de %d, resulta em: %d",numero1,numero2,resultado);
}



