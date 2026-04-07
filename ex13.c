#include <stdio.h>

int main(){
    float fabrica;
    printf("Digite o custo de fabrica: ");
    scanf("%f", &fabrica);
    printf("Custo final: %.2f", fabrica+fabrica*0.28+fabrica*0.45);
}