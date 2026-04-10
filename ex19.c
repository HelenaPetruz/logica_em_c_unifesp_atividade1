#include <stdio.h>
#include <math.h>

int main()
{
    float comprimento, largura, altura, area, caixas;
    printf("Digite o comprimento da cozinha: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da cozinha: ");
    scanf("%f", &largura);
    printf("Digite a altura da cozinha: ");
    scanf("%f", &altura);
    area = 2*altura*(comprimento+largura);
    printf("Quantidade de caixas de azulejos: %.0f\n", caixas);

}