#include <stdio.h>

float calcularMediaTurma(float notas[]) {
    float soma = 0;
    int i;

    for (i = 0; i < 10; i++) {
        soma = soma + notas[i];
    }

    return soma / 10;
}

float encontrarMaiorNota(float notas[]) {
    float maior = notas[0];
    int i;

    for (i = 1; i < 10; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

int contarAprovados(float notas[]) {
    int contador = 0;
    int i;

    for (i = 0; i < 10; i++) {
        if (notas[i] >= 7.0) {
            contador++;
        }
    }

    return contador;
}

void exibirResultados(float media, float maior, int aprovados) {
    printf("\n--- RESULTADOS DA TURMA ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Quantidade de aprovados: %d\n", aprovados);
}

int main() {
    float notas[10];
    float media, maior;
    int aprovados, i;

    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcularMediaTurma(notas);

    maior = encontrarMaiorNota(notas);

    aprovados = contarAprovados(notas);

    exibirResultados(media, maior, aprovados);

    return 0;
}