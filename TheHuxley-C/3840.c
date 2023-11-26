#include <stdio.h>
#include <math.h>

#define MAX 100000

// Declaração de variável global
int primo[MAX];

// Função para calcular a Criba de Eratóstenes
void criba() {
    int i, j;

    for (i = 2; i < MAX; i++) {
        primo[i] = 1;
    }

    for (i = 2; pow(i, 2) < MAX; i++) {
        if (primo[i]) {
            for (j = pow(i, 2); j < MAX; j += i) {
                primo[j] = 0;
            }
        }
    }
}

int main() {
    // Declaração de variável
    int N, K, P, Q, i, j, fatores, impar, aux, primeiro;

    // Inicialização de variável
    Q = 0;
    primeiro = 0;

    // Leitura dos valores de n, k e p
    scanf("%d %d %d", &N, &K, &P);

    // Chamada da função criba para calcular a criba de Eratóstenes
    criba();

    // Loop para encontrar números que atendem às condições especificadas
    for (i = N; i < K; i++) {
        fatores = 1;
        impar = 0;
        aux = i;

        // Loop para encontrar fatores primos e contar fatores ímpares
        for (j = 2; pow(j, 2) <= i; j++) {
            if (primo[j] && aux % j == 0) {
                fatores *= j;
                if (j % 2 == 1) {
                    impar++;
                }
                while (aux % j == 0) {
                    aux /= j;
                }
            }
        }

        // Verifica se há um fator primo restante
        if (aux > 1) {
            fatores *= aux;
            if (aux % 2 == 1) {
                impar++;
            }
        }

        // Verifica se os fatores primos e a quantidade de ímpares atendem às condições
        if (fatores == i && impar == P) {
            Q++;
            if (primeiro == 0) {
                primeiro = i;
            }
        } else if (fatores < i && impar == P) {
            // Se os fatores são menores que a, verifica se multiplicar por 2 chega a a
            while (fatores < i) {
                fatores *= 2;
                if (fatores == i) {
                    Q++;
                    if (primeiro == 0) {
                        primeiro = i;
                        break;
                    }
                }
            }
        }
    }

    // Imprime os resultados
    if (primeiro != 0) {
        printf("%d %d", primeiro, Q - 1);
    } else {
        printf("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");
    }

    return 0;
}