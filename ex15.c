#include <stdio.h>

int main(){
    int f;
    printf("Digite a temperatura em graus Fahrenheit ");
    scanf("%d", &f);
    printf("Temperatura em Celsius: %d", ((f-32)*5)/9);

}