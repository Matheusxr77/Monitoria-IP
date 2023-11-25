#include <stdio.h>

int main() {
    // Declaração de variáveis
    int premio, porcentagem1, porcentagem2, porcentagem3, adicional, dinheiro;
    float pessoa1, pessoa2, pessoa3;

    // Inicializando da variável dinheiro de Rebeca com 3
    dinheiro = 3;

    // Leitura do prêmio e porcentagens
    scanf("%d %d %d %d", &premio, &porcentagem1, &porcentagem2, &porcentagem3);

    // Cálculo da parte de cada pessoa
    pessoa1 = (premio * porcentagem1) / 100.0;
    pessoa2 = (premio * porcentagem2) / 100.0;
    pessoa3 = (premio * porcentagem3) / 100.0;

    // Cálculo do valor adicional não distribuído
    adicional = premio - (pessoa1 + pessoa2 + pessoa3);

    // Verificação se os valores são inteiros
    if ((pessoa1 == (int)pessoa1) && (pessoa2 == (int)pessoa2) && (pessoa3 == (int)pessoa3)) {
        dinheiro += adicional;
        printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", pessoa1, pessoa2, pessoa3);
    } else {
        // Incremento no prêmio e novo cálculo das partes
        premio++;
        pessoa1 = (premio * porcentagem1) / 100.0;
        pessoa2 = (premio * porcentagem2) / 100.0;
        pessoa3 = (premio * porcentagem3) / 100.0;

        // Verificação se os valores são inteiros
        if ((pessoa1 == (int)pessoa1) && (pessoa2 == (int)pessoa2) && (pessoa3 == (int)pessoa3)) {
            // Verificação do adicional para permitir mais dinheiro
            if (adicional >= 2) {
                dinheiro += adicional - 1;
                printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", pessoa1, pessoa2, pessoa3);
            } else {
                printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            }
        } else {
            // Novo incremento no prêmio e novo cálculo das partes
            premio++;
            pessoa1 = (premio * porcentagem1) / 100.0;
            pessoa2 = (premio * porcentagem2) / 100.0;
            pessoa3 = (premio * porcentagem3) / 100.0;

            // Verificação se os valores são inteiros
            if ((pessoa1 == (int)pessoa1) && (pessoa2 == (int)pessoa2) && (pessoa3 == (int)pessoa3)) {
                // Verificação do adicional para permitir mais dinheiro
                if (adicional >= 3) {
                    dinheiro += adicional - 2;

                    // Leitura de idades e cálculo do divisor
                    int idade1, idade2, idade3, divisor = 0;
                    scanf("%d %d %d", &idade1, &idade2, &idade3);
                    printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", pessoa1, pessoa2, pessoa3);

                    // Verificação das idades e cálculo do divisor
                    if (idade1 % 3 == 0) {
                        divisor += idade1 / 3;
                    } else if (idade2 % 3 == 0) {
                        divisor += idade2 / 3;
                    } else if (idade3 % 3 == 0) {
                        divisor += idade3 / 3;
                    } else if (divisor != 0) {
                        printf("%d\n", divisor);
                    }
                }
            } else {
                printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            }
        }
    }

    // Verificação final do dinheiro e impressão do resultado
    if (dinheiro >= 7) {
        printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
    } else {
        printf("E parece que Rebeka vai ter que voltar andando...\n");
    }

    return 0;
}