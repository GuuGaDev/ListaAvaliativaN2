#include <stdio.h>

int main() {
    int matrizA[4][4], matrizB[4][4], resultado[4][4];
    char operacao[5];
    int i, j, k;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s", operacao);

    if (operacao[0] == 's') {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
    } else if (operacao[0] == 'm') {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                resultado[i][j] = 0;
                for (k = 0; k < 4; k++) {
                    resultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }
    } else if (operacao[0] == 's' && operacao[1] == 'u') {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
