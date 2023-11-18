#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    int a, i, j, posicao, voltas, vezes, instrucao[101];
    char comando[50];

    // Lê o número de voltas
    scanf("%d", &voltas);

    // Loop para cada volta
    for (j = 0; j < voltas; j++) {

        // Inicializa o array de instruções com zeros
        for (i = 0; i < 102; i++) {
            instrucao[i] = 0;
        }

        // Inicializa a posição
        posicao = 0; 

        // Lê o número de instruções para a volta atual
        scanf("%d", &vezes);

        // Loop para cada instrução
        for (i = 1; i <= vezes; i++) {

            // Lê o comando
            scanf(" %s", &comando);

            // Verifica o tipo de comando e executa a ação correspondente
            if (comando[0] == 'S') {
                scanf(" %*s %d", &a);
            }

            if (comando[0] == 'L') {
                instrucao[i] = 1;
            }

            if (comando[0] == 'R') {
                instrucao[i] = 2;
            }

            if (comando[0] == 'S') {
                instrucao[i] = instrucao[a];
            }

            // Atualiza a posição com base na instrução atual
            if (instrucao[i] == 1) {
                posicao--;
            }

            if (instrucao[i] == 2) {
                posicao++;
            }
        }

        // Imprime a posição final após cada volta
        printf("%d\n", posicao);
    }

    return 0;
}