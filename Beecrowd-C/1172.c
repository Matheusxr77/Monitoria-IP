#include <stdio.h>

int main() {
      // Declaração de variáveis: vetorX (vetor de inteiros), i (índice do vetor), posicao (variável para rastrear a posição)
      int vetorX[10];
      int i, posicao;
      
      // Inicialização da variável posicao
      posicao = 0;
      
      // Loop for para preencher o vetor e imprimir os valores modificados
      for (i = 0; i < 10; i++) {
            // Leitura de um valor inteiro e armazenamento no vetorX
            scanf("%d", &vetorX[i]);
            
            // Verificação e impressão dos valores modificados
            if (vetorX[i] <= 0) {
                  printf("X[%d] = 1\n", posicao++);
            } else {
                  printf("X[%d] = %d\n", posicao++, vetorX[i]);
            }
      }
      
      return 0;
}