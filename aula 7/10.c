#include <stdio.h>

float calcularTotal(float vendas[]) {
    float total = 0;
    int i;

    for (i = 0; i < 5; i++) {
        total = total + vendas[i];
    }

    return total;
}

float calcularMedia(float total, int quantidade) {
    return total / quantidade;
}

int contarVendasAcimaDaMedia(float vendas[], float media) {
    int i, contador = 0;

    for (i = 0; i < 5; i++) {
        if (vendas[i] > media) {
            contador++;
        }
    }

    return contador;
}

int main() {
    float vendas[5];
    float total, media;
    int i, acima;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor da venda do dia %d: ", i + 1);
        scanf("%f", &vendas[i]);
    }

    total = calcularTotal(vendas);

    media = calcularMedia(total, 5);

    acima = contarVendasAcimaDaMedia(vendas, media);

    printf("\n--- RESULTADO DAS VENDAS ---\n");
    printf("Total vendido: R$ %.2f\n", total);
    printf("Media diaria: R$ %.2f\n", media);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}