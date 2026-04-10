#include <stdio.h>

int main()
{
    float a, b;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    if (a == b)
    {
        printf("Numeros iguais\n");
    }
    else if (a > b)
    {
        printf("Primeiro é maior\n");
    }
    else
    {
        printf("Segundo maior\n");
    }

}