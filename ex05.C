//Fa�a um programa que pe�a um n�mero e informe se o n�mero � inteiro ou quebrado.
#include<stdio.h>
int main ()
{
	double n1 = 0;
	
	printf("Digite um numero para verificar se ele e inteiro ou quebrado:\n ");
	//fgets(num);
	scanf("%lf", &n1);
	
	if (n1 == (int) n1){
		printf("INTEIRO!");
	}
	else{
		printf("QUEBRADO!");
	}
	return 0;
}
