/* Considere um robô posicionado na origem do plano cartesiano xy. O robô é capaz de executar as seguintes 
instruções:
- Frente k: move-se k unidades para a frente
- Recua k: move-se k unidades para trás
- Esquerda k: move-se k unidades para a esquerda
- Direita k: move-se k unidades para a direita
- Fim: o robô finaliza a execução das instruções
Faça um programa em Linguagem C em que recebe um número indefinido de instruções vindas do teclado e, ao final, 
imprime a distância do robô à sua posição de origem. */

#include <stdio.h>
#include <math.h>

int main() {
    int x = 0;  // Posição x inicial do robô
    int y = 0;  // Posição y inicial do robô
    char comando;
    int k;

    printf("Digite as instruções (Frente (F k), Recua (R k), Esquerda (E k), Direita (D k), Fim para encerrar(I)):\n");

    while (1) {
        scanf(" %c", &comando);

        if (comando == 'F' || comando == 'f') {
            scanf("%d", &k);
            x += k;
        } else if (comando == 'R' || comando == 'r') {
            scanf("%d", &k);
            x -= k;
        } else if (comando == 'E' || comando == 'e') {
            scanf("%d", &k);
            y += k;
        } else if (comando == 'D' || comando == 'd') {
            scanf("%d", &k);
            y -= k;
        } else if (comando == 'I' || comando == 'i') {
            break; // Encerra o loop quando o comando "Fim" é dado
        } else {
            printf("Comando inválido.\n");
        }
    }

    // Calcula a distância do robô à origem
    double distancia = sqrt(x * x + y * y);

    printf("A distância do robô à origem é: %.2lf\n", distancia);

    return 0;
}