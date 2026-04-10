#include <stdio.h>

int main()
{
    float potencia, largura, comprimento;
    printf("Digite a potência da lâmpada, em watts: ");
    scanf("%f", &potencia);
    printf("Digite a largura do comodo, em metros: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do comodo, em metros: ");
    scanf("%f", &comprimento);
    printf("Lâmpadas nessárias: %.0f", (largura*comprimento*18)/potencia);
}