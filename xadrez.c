#include <stdio.h>

int main() {
    // Torre: movimenta 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Bispo: movimenta 5 casas na diagonal (cima e direita) usando WHILE
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= 5) {
        printf("Cima Direita %d\n", b);
        b++;
    }

    // Rainha: movimenta 8 casas para a esquerda usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda %d\n", r);
        r++;
    } while (r <= 8);

    return 0;
}