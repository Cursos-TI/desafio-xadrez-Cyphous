#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int atual, int destino) {
    if (atual > destino) return;
    printf("Direita %d\n", atual);
    moverTorre(atual + 1, destino);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int atual, int destino) {
    if (atual > destino) return;
    printf("Esquerda %d\n", atual);
    moverRainha(atual + 1, destino);
}

// Função recursiva para movimentar o Bispo (chama um loop aninhado interno)
void moverBispo(int vertical, int limite) {
    if (vertical > limite) return;
    
    // Loop horizontal aninhado para cada movimento vertical
    for (int horizontal = 1; horizontal <= 1; horizontal++) {
        printf("Cima Direita %d\n", vertical);
    }

    moverBispo(vertical + 1, limite);
}

int main() {
    // Torre: movimenta 5 casas para a direita usando recursão
    printf("Movimento da Torre:\n");
    moverTorre(1, 5);

    // Bispo: movimenta 5 casas na diagonal (cima e direita) com recursão e loop aninhado
    printf("\nMovimento do Bispo:\n");
    moverBispo(1, 5);

    // Rainha: movimenta 8 casas para a esquerda usando recursão
    printf("\nMovimento da Rainha:\n");
    moverRainha(1, 8);

    // Cavalo: movimenta em "L" (2 para cima e 1 para a direita)
    // Usando loops aninhados com múltiplas variáveis, e break/continue
    printf("\nMovimento do Cavalo:\n");

    int movimentos = 1; // quantas vezes o cavalo fará esse "L"

    for (int m = 0; m < movimentos; m++) {
        int cima = 0;
        int direita = 0;

        // Primeiro loop: sobe duas casas
        for (int i = 0; i < 3; i++) {
            if (i == 2) break; // sobe só até 2
            printf("Cima\n");
            cima++;
        }

        // Segundo loop: tenta mover para a direita, mas só move uma vez
        for (int j = 0; j < 3; j++) {
            if (j != 0) {
                continue; // só movimenta na primeira tentativa
            }
            printf("Direita\n");
            direita++;
        }
    }

    return 0;
}
