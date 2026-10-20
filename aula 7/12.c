#include <stdio.h>

int calcularTotalEstoque(int estoque[]) {
    int total = 0;
    int i;

    for (i = 0; i < 8; i++) {
        total = total + estoque[i];
    }

    return total;
}

int contarEstoqueBaixo(int estoque[]) {
    int contador = 0;
    int i;

    for (i = 0; i < 8; i++) {
        if (estoque[i] < 5) {
            contador++;
        }
    }

    return contador;
}

int buscarProduto(int estoque[], int codigo) {
    int posicao;

    if (codigo >= 1 && codigo <= 8) {
        posicao = codigo - 1;
        return posicao;
    }

    return -1;
}

int main() {
    int estoque[8];
    int i, total, baixo;
    int codigo, posicao;

    for (i = 0; i < 8; i++) {
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    total = calcularTotalEstoque(estoque);

    baixo = contarEstoqueBaixo(estoque);

    printf("\nDigite o codigo do produto que deseja buscar: ");
    scanf("%d", &codigo);

    posicao = buscarProduto(estoque, codigo);

    printf("\n--- RESULTADO DO ESTOQUE ---\n");

    printf("Total de unidades: %d\n", total);

    printf("Produtos com estoque baixo: %d\n", baixo);

    if (posicao != -1) {
        printf("Produto encontrado!\n");
        printf("Posicao no vetor: %d\n", posicao);
        printf("Quantidade em estoque: %d\n", estoque[posicao]);
    } else {
        printf("Produto nao encontrado!\n");
    }

    return 0;
}