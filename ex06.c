#include<stdio.h>

int main ()
{
	char letra;
	
	printf("Digite a letra para saber o sexo:\n");
	scanf("%c", &letra);
	fflush(stdin);
	if (letra == 'f' || letra == 'F'){
		printf("FEMININO");
	} else if (letra == 'm' || letra = 'M'){ // para char é aspas simples ''
		printf("MASCULINO");
	}else {
		printf("SEXO INEXISTENTE!");
	}

	return 0;
}
