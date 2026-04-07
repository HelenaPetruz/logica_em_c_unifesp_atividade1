#include <stdio.h>

int main(){
    float salario, horas;
    printf("Digite seu salário por hora: ");
    scanf("%f", &salario);
    printf("Digite o número de horas trabalhadas por mês: ");
    scanf("%f", &horas);
    printf("Salário do mês: %.2f", salario*horas);
    return 0;
}
