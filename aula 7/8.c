#include <stdio.h>

int ehPrimo(int numero) {
    int i;

    if (numero < 2) {
        return 0;
    }

    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = ehPrimo(numero);

    if (resultado == 1) {
        printf("O numero e primo!\n");
    } else {
        printf("O numero nao e primo!\n");
    }

    return 0;
}