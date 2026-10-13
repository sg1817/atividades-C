#include <stdio.h>

#define META_PASSOS 10000

int main(void) {
    int passos;
    int total = 0;
    int horas = 0;

    while (total < META_PASSOS) {
        horas++;

        do {
            printf("Passos na hora %d: ", horas);
            scanf("%d", &passos);

            if (passos < 0) {
                printf("Valor invalido! Digite um numero maior ou igual a 0.\n");
            }
        } while (passos < 0);

        total += passos;
        printf("Total acumulado: %d passos\n\n", total);
    }

    printf("Meta de %d passos atingida!\n", META_PASSOS);
    printf("Total de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}