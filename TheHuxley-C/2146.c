#include <stdio.h>

int main() {
    // Declaração de variáveis
    int calibre, quantidade;
    char nacionalidade, ocupacao;

    // Inicialização da variável
    quantidade = 0;
    
    // Leitura da nacionalidade inicial
    scanf("%c", &nacionalidade);

    while (quantidade >= 0) {
        // Verifica se a nacionalidade é 'B' ou 'E'
        if (nacionalidade != 'B' && nacionalidade != 'E') {
            break;  // Encerra o loop se a nacionalidade não for válida
        }
    
        // Leitura da ocupação
        scanf("\n%c", &ocupacao);

        // Verifica se a ocupação é 'M', 'T', 'C' ou 'O'
        if (ocupacao != 'M' && ocupacao != 'T' && ocupacao != 'C' && ocupacao != 'O') {
            break;  // Encerra o loop se a ocupação não for válida
        }

        // Leitura da quantidade e do calibre
        scanf("\n%d\n%d", &quantidade, &calibre);
        
        // Lógica de autorização
        if (nacionalidade == 'E' && quantidade > 0) {
            printf("Barrado\n");
        } else if (nacionalidade == 'E' && quantidade == 0) {
            printf("Liberado\n");
        } 
        if (nacionalidade == 'B' && ocupacao == 'M') {
            printf("Liberado\n");
        } else if (nacionalidade == 'B' && (ocupacao == 'T' || ocupacao == 'O') && quantidade <= 1 && calibre <= 22) {
            printf("Liberado\n");
        } else if (nacionalidade == 'B' && ocupacao == 'C' && quantidade <= 2 && calibre <= 38) { 
            printf("Liberado\n"); 
        } else if (nacionalidade == 'B') {
            printf("Barrado\n");
        }
    
        // Leitura da próxima nacionalidade para continuar ou encerrar o loop
        scanf("\n%c", &nacionalidade);
    }

    // Imprime "Fim" quando o loop termina
    printf("Fim\n");

    return 0;  
}