//1) ) Faça um programa que peça dois números e imprima o maior deles.
#include <stdio.h>

int main(void)
{
	
	int n1;
	int n2;
	double calc;
	
	printf("digite dois numeros:");
	scanf("%i %i", &n1, &n2);
	
	//calc = (double) one/two -- > alteração de tipo (casting)
	if (n1>n2){
		printf("O maior e %i", n1);
	} else if (n1<n2){
		printf("O maior e %i", n2);
	}else{
		printf("Eles são iguais!");
	}
	
	
	return 0;
}
