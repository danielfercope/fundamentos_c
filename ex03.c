// Fa�a um programa que pe�a um n�mero e imprima se o n�mero � par ou �mpar.
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
