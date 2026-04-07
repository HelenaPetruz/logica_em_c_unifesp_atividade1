#include <stdio.h>

int main(){
    float lado;
    printf("Digite a medida do lado: ");
    scanf("%f", &lado);
    printf("Dobro da área: %.2f", lado*lado*2);
    return 0;
}
