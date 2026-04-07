#include <stdio.h>

int main(int argc, char *argv[])
{
	float salario, reajuste;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	printf("Digite seu reajuste salarial ");
	scanf("%f", &reajuste);
	printf("Novo salario: %.2f", salario+salario*reajuste);
	return 0;
}
