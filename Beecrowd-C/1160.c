#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    int casos, pa, pb, i, anos;
    double g1, g2;

    // Lê o número de casos
    scanf("%d", &casos);

    // Loop para processar cada caso
    for (i = 1; i <= casos; i++) {
        anos = 0;
        
        // Lê as informações sobre as populações e as taxas de crescimento
        scanf("%d""%d""%lf""%lf", &pa, &pb, &g1, &g2);

        // Loop para calcular o tempo necessário para que a população pa ultrapasse ou seja igual à população pb
        while (pa <= pb) {
            pa *= (g1 / 100.0) + 1.0;
            pb *= (g2 / 100.0) + 1.0;
            anos = anos + 1;

            // Verifica se o tempo ultrapassou 100 anos
            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        // Imprime o tempo necessário em anos
        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}