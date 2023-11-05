#include <stdio.h>

int main() {
    int valores[10];
    int i, j;

    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    while (i > 1) {
        for (j = 0; j < i - 1; j++) {
            valores[j] = valores[j] + valores[j + 1];
            printf("%d ", valores[j]);
        }
        printf("\n");
        i--;
    }

    printf("%d\n", valores[0]);

    return 0;
}
