//1) ) Fa�a um programa que pe�a dois n�meros e imprima o maior deles.
#include <stdio.h>

int main(void)
{
	
	int n1;
	int n2;
	double calc;
	
	printf("digite dois numeros:");
	scanf("%i %i", &n1, &n2);
	
	//calc = (double) one/two -- > altera��o de tipo (casting)
	if (n1>n2){
		printf("O maior e %i", n1);
	} else if (n1<n2){
		printf("O maior e %i", n2);
	}else{
		printf("Eles s�o iguais!");
	}
	
	
	return 0;
}
