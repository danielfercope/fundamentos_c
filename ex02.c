//Fa�a um programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.
#include <stdio.h>

int main(void)
{
	int valor;
	
	printf("Digite um n�mero para descobrir se � positivo ou negativo");
	scanf("%i", &valor); 
	if (valor < 0){
		printf("NEGATIVO");
	}
	else if (valor > 0){
		printf("POSITIVO");
	}
	else{
		printf("O valor que digitou � 0!");
	}
	
	return 0;
}


