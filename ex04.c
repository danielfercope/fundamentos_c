//Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa.
#include<stdio.h>

int main ()
{
	int num = 0;
	
	printf("Digite um numero para verificar se ele e impar ou par:\n ");
	//fgets(num);
	scanf("%i", &num);
	
	if ((num % 2) == 0) {
		num++;
		printf("O numero digitado foi par e agora foi transformado em impar, olha aqui -> %i !", num);
	}
	else{
		num--;
		printf("O numero digitado foi impar e agora foi transformado em par, olha aqui -> %i !", num);
	}
	
	return 0;
}
