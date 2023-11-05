#include <stdio.h>

int main() {
    char nomeTime1[31], nomeTime2[31];
    char nomeJogador[31], posicao;
    int forca, i;
    double forcaTime1 = 0, forcaTime2 = 0;

    scanf("%s", nomeTime1);
    for (i = 0; i < 11; i++) {
        scanf("%s %c %d", nomeJogador, &posicao, &forca);
        if (posicao == 'G') {
            forcaTime1 += 8 * forca;
        } else if (posicao == 'L' || posicao == 'R') {
            forcaTime1 += 10 * forca;
        } else if (posicao == 'Z') {
            forcaTime1 += 5 * forca;
        } else if (posicao == 'V') {
            forcaTime1 += 8 * forca;
        } else if (posicao == 'M') {
            forcaTime1 += 11 * forca;
        } else if (posicao == 'A') {
            forcaTime1 += 12 * forca;
        }
    }

    scanf("%s", nomeTime2);
    for (i = 0; i < 11; i++) {
        scanf("%s %c %d", nomeJogador, &posicao, &forca);
        if (posicao == 'G') {
            forcaTime2 += 8 * forca;
        } else if (posicao == 'L' || posicao == 'R') {
            forcaTime2 += 10 * forca;
        } else if (posicao == 'Z') {
            forcaTime2 += 5 * forca;
        } else if (posicao == 'V') {
            forcaTime2 += 8 * forca;
        } else if (posicao == 'M') {
            forcaTime2 += 11 * forca;
        } else if (posicao == 'A') {
            forcaTime2 += 12 * forca;
        }
    }

    printf("%s: %.2lf de forca\n", nomeTime1, forcaTime1 / 100);
    printf("%s: %.2lf de forca\n", nomeTime2, forcaTime2 / 100);

    if (forcaTime1 > forcaTime2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaTime2 > forcaTime1) {
        printf("%s eh mais forte\n", nomeTime2);
    } else {
        printf("Os times sao iguais em forca\n");
    }

    return 0;
}
