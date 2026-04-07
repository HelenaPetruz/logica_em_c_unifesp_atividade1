#include <stdio.h>

int main(){
    int eleitores, brancos, nulos, validos;
    printf("Digite o número total de eleitores: ");
    scanf("%i", &eleitores);
    printf("Digite o número total votos brancos: ");
    scanf("%i", &brancos);
    printf("Digite o número total votos nulos: ");
    scanf("%i", &nulos);
    printf("Digite o número total votos validos: ");
    scanf("%i", &validos);
    printf("Porcentagem de votos brancos: %.2f", (brancos/eleitores)*100, "% \n");
    printf("Porcentagem de votos nulos: %.2f", (nulos/eleitores)*100, "%\n");
    printf("Porcentagem de votos validos: %.2f", (validos/eleitores)*100, "% \n");
    return 0;
}
