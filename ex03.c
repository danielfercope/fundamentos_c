// Faça um programa que peça um número e imprima se o número é par ou ímpar.
#include<stdio.h>

int main ()
{
	int num;
	
	printf("Digite um numero para verificar se ele e impar ou par:\n ");
	//fgets(num);
	scanf("%i", &num);
	
	if ((num % 2) == 0) {
		printf("O numero e par!");
	}
	else{
		printf("O numero e impar!");
	}
	
	return 0;
}
