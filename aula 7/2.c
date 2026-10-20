#include <stdio.h>

int calcularDobro(int numero) {
    return numero * 2;
}

int main() {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = calcularDobro(numero);

    printf("O dobro e: %d\n", resultado);

    return 0;
}