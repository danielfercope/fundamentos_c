#include<stdio.h>

int main ()
{
	char letra;
	
	printf("Digite a letra para saber o sexo:\n");
	scanf("%c", &letra);
	fflush(stdin);
	if (letra == 'f'){
		printf("FEMININO");
	} else if (letra == 'm'){ // para char é aspas simples ''
		printf("MASCULINO");
	}else {
		printf("SEXO INEXISTENTE, meu chapa!");
	}

	return 0;
}
