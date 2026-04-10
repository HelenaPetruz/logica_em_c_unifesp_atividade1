#include <stdio.h>

int main()
{
    float km_inicial, km_final, litros, valor_recebido, km_rodados, consumo, gasto, lucro;
    printf("Digite o km inicial: ");
    scanf("%f", &km_inicial);
    printf("Digite o km final: ");
    scanf("%f", &km_final);
    printf("Digite os litros de combustivel gastos: ");
    scanf("%f", &litros);
    printf("Digite o valor recebido: ");
    scanf("%f", &valor_recebido);
    km_rodados = km_final - km_inicial;
    consumo = km_rodados / litros;
    gasto = litros * 2.90;
    lucro = valor_recebido - gasto;
    printf("Consumo medio: %.2f km/l\n", consumo);
    printf("Lucro liquido: R$ %.2f\n", lucro);
}