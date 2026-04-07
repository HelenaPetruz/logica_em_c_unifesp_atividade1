#include <stdio.h>

int main(){
    float n;
    printf("Digite o valor em metros: ");
    scanf("%f", &n);
    printf("Valor e centímetros: %.2f", n*100);
    return 0;
}
