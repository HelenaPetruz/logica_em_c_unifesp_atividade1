#include <stdio.h>

int main()
{
    float comprimento_pista, consumo, voltas_trecho, distancia_km, litros;
    int total_voltas, reabastecimentos;
    printf("Comprimento da pista, em metros: ");
    scanf("%f", &comprimento_pista);
    printf("Numero total de voltas: ");
    scanf("%d", &total_voltas);
    printf("Numero de reabastecimentos: ");
    scanf("%d", &reabastecimentos);
    printf("Consumo do carro, Km/L: ");
    scanf("%f", &consumo);
    voltas_trecho = total_voltas / (reabastecimentos + 1.0);
    distancia_km = (comprimento_pista * voltas_trecho) / 1000;
    litros = distancia_km / consumo;
    printf("Litros necessarios ate o primeiro reabastecimento: %.2f\n", litros);
    return 0;
}