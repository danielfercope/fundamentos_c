//Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
#include <stdio.h>

int main(void)
{
	int valor;
	
	printf("Digite um número para descobrir se é positivo ou negativo");
	scanf("%i", &valor); 
	if (valor < 0){
		printf("NEGATIVO");
	}
	else if (valor > 0){
		printf("POSITIVO");
	}
	else{
		printf("O valor que digitou é 0!");
	}
	
	return 0;
}


