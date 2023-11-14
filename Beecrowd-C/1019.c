#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar o valor total e as quantidades de horas, minutos e segundos
    int N, h, m, s;

    // Solicita ao usuário que insira o valor total em segundos
    scanf("%d", &N);

    // Calcula a quantidade de horas, minutos e segundos
    h = N / 3600;  // Calcula as horas (3600 segundos em uma hora)
    m = (N % 3600) / 60;  // Calcula os minutos (60 segundos em um minuto)
    s = (N % 3600) % 60;  // Calcula os segundos restantes

    // Exibe o resultado formatado na saída padrão
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}