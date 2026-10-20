#include <stdio.h>

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = ehPar(numero);

    if (resultado == 1) {
        printf("O numero e par!\n");
    } else {
        printf("O numero e impar!\n");
    }

    return 0;
}