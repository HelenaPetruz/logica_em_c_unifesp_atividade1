#include <stdio.h>

int main(){
    float salario, carros, vendas, valorPorCarro, comissao;
    printf("Digite o número de carros vendidos ");
    scanf("%f", &carros);
    printf("Digite o valor total das vendas ");
    scanf("%f", &vendas);
    printf("Digite o salario fixo ");
    scanf("%f", &salario);
    printf("Digite o valor recebido por carro ");
    scanf("%f", &valorPorCarro);
    printf("Digite a comissao ");
    scanf("%f", &comissao);
    printf("Salário final: %.2f ", salario+ 0.05*vendas + carros*comissao*valorPorCarro);
}