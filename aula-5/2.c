#include <stdio.h>

int main(void) {
    int opcao;
    int qtd50 = 0, qtd100 = 0, qtd200 = 0;
    float total = 0.0;

    do {
        printf("\n--- Cofrinho Digital ---\n");
        printf("1 - Adicionar moeda de R$0,50\n");
        printf("2 - Adicionar moeda de R$1,00\n");
        printf("3 - Adicionar moeda de R$2,00\n");
        printf("0 - Parar e mostrar o total\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                qtd50++;
                total += 0.50;
                printf("Moeda de R$0,50 adicionada. Saldo: R$%.2f\n", total);
                break;
            case 2:
                qtd100++;
                total += 1.00;
                printf("Moeda de R$1,00 adicionada. Saldo: R$%.2f\n", total);
                break;
            case 3:
                qtd200++;
                total += 2.00;
                printf("Moeda de R$2,00 adicionada. Saldo: R$%.2f\n", total);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    printf("\n--- Resumo do Cofrinho ---\n");
    printf("Moedas de R$0,50: %d\n", qtd50);
    printf("Moedas de R$1,00: %d\n", qtd100);
    printf("Moedas de R$2,00: %d\n", qtd200);
    printf("Total acumulado: R$%.2f\n", total);

    return 0;
}