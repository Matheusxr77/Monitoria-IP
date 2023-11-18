#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i, P, N, posatual;
    int prox[101];

    // Lê a altura do pulo (P) e o número de canos (N)
    scanf("%d %d", &P, &N);

    // Lê as posições dos canos
    for (i = 0; i < N; i++) {
        scanf("%d", &prox[i]);
    }

    // Define a posição inicial como a primeira posição do canto
    posatual = prox[0]; 
    i = 0;

    // Loop enquanto o personagem estiver pulando entre os canos
    while (((posatual + P) >= prox[i] && prox[i] >= posatual) || ((posatual - P) <= prox[i] && prox[i] <= posatual)) {
        posatual = prox[i]; // Atualiza a posição atual para a posição do canto atual
        i++;

        // Verifica se o personagem alcançou todos os canos
        if (i == N) {
            printf("YOU WIN\n");
            return 0;
        }
    }

    // Se o loop terminou, significa que o personagem não conseguiu pular entre os canos
    printf("GAME OVER\n");
    return 0;
}