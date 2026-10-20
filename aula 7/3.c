#include <stdio.h>

int maiorNumero(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    maior = maiorNumero(num1, num2);

    printf("O maior numero e: %d\n", maior);

    return 0;
}