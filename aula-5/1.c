#include <stdio.h>

#define TOTAL_MORADORES 5
#define LIMITE_MEDIA 20.0

int main(void) {
    float consumos[TOTAL_MORADORES];
    float soma = 0.0;
    int i;

    for (i = 0; i < TOTAL_MORADORES; i++) {
        printf("Consumo do morador %d (m3): ", i + 1);
        scanf("%f", &consumos[i]);
        soma += consumos[i];
    }

    printf("\n--- Situacao de cada morador ---\n");
    for (i = 0; i < TOTAL_MORADORES; i++) {
        if (consumos[i] <= LIMITE_MEDIA) {
            printf("Morador %d: %.2f m3 -> dentro da media\n", i + 1, consumos[i]);
        } else {
            printf("Morador %d: %.2f m3 -> acima da media\n", i + 1, consumos[i]);
        }
    }

    printf("\nConsumo medio geral: %.2f m3\n", soma / TOTAL_MORADORES);

    return 0;
}