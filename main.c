#include <stdio.h>

int main() {
    int vetor[5], matriz[5][5], resultado[5] = {0};

    printf("Digite os elementos do vetor de 5 elementos:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            resultado[i] += vetor[j] * matriz[j][i];
        }
    }

    for (int i = 0; i < 5; i++) {
        resultado[i] /= matriz[2][i];
    }

    printf("\nResultado da operação:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
