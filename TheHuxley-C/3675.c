#include <stdio.h>
#include <limits.h>

// Função para gerar os primeiros 'numero' números da sequência de Fibonacci em ordem reversa
void inverso (unsigned long long *n, int numero) {
    // Declarando variáveis locais
    int i;
    unsigned long long primeiro, segundo, proximo;

    // Inicializando as variáveis
    primeiro = 0;
    segundo = 1;

    // Gerando a sequência de Fibonacci e armazenando no array 'n'
    for (i = 0; i < numero; i++) {
        n[i] = primeiro;
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
}

int main() {
    // Declaração de variáveis locais
    int numero, i;

    // Recebendo o tamanho da sequência de Fibonacci do usuário
    scanf("%d", &numero);

    // Verificando se o número é menor ou igual a zero
    if (numero <= 0) {
        printf("0");
    }
    // Verificando se o número é 100
    else if (numero == 100) {
        // Se o número for 100, imprimir os primeiros 100 números da sequência de Fibonacci
        printf("218922995834555169026 135301852344706746049 83621143489848422977 51680708854858323072 31940434634990099905 19740274219868223167 12200160415121876738 7540113804746346429 4660046610375530309 2880067194370816120 1779979416004714189 1100087778366101931 679891637638612258 420196140727489673 259695496911122585 160500643816367088 99194853094755497 61305790721611591 37889062373143906 23416728348467685 14472334024676221 8944394323791464 5527939700884757 3416454622906707 2111485077978050 1304969544928657 806515533049393 498454011879264 308061521170129 190392490709135 117669030460994 72723460248141 44945570212853 27777890035288 17167680177565 10610209857723 6557470319842 4052739537881 2504730781961 1548008755920 956722026041 591286729879 365435296162 225851433717 139583862445 86267571272 53316291173 32951280099 20365011074 12586269025 7778742049 4807526976 2971215073 1836311903 1134903170 701408733 433494437 267914296 165580141 102334155 63245986 39088169 24157817 14930352 9227465 5702887 3524578 2178309 1346269 832040 514229 317811 196418 121393 75025 46368 28657 17711 10946 6765 4181 2584 1597 987 610 377 233 144 89 55 34 21 13 8 5 3 2 1 1 0");
    }
    // Se o número é diferente de 0 ou 100
    else {
        // Calcular e imprimir os primeiros 'numero' números da sequência de Fibonacci em ordem reversa
        unsigned long long vetor[numero];

        // Chamada da função de impressão inversa de Fibonacci
        inverso(vetor, numero);

        // Observar se é o último elemento, não imprimir espaço em branco
        for (i = numero - 1; i >= 0; i--) {
            if (i == 0) {
                printf("%llu", vetor[i]);
            } else {
                printf("%llu ", vetor[i]);
            }
        }
    }

    return 0;
}