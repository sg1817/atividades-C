#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\n--- CALCULADORA ---\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma operacao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = somar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = subtrair(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = multiplicar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (num2 != 0) {
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: nao e possivel dividir por zero!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}