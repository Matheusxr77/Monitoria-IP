#include <stdio.h>

int main() {
    // Declaração de variáveis
    int diainicio, diafim, dia, horainicio, horafim, hora, minutoinicio, minutofim, minuto, segundoinicio, segundofim, segundo;

    // Solicita ao usuário que insira as informações dos momentos inicial e final
    scanf("%*s %d", &diainicio);
    scanf("%d %*s %d %*s %d", &horainicio, &minutoinicio, &segundoinicio);
    scanf("%*s %d", &diafim);
    scanf("%d %*s %d %*s %d", &horafim, &minutofim, &segundofim);

    // Calcula a diferença em segundos, minutos, horas e dias
    segundo = segundofim - segundoinicio;
    minuto = minutofim - minutoinicio;
    hora = horafim - horainicio;
    dia = diafim - diainicio;

    // Corrige as diferenças negativas ajustando as unidades maiores
    if (segundo < 0) {
        segundo += 60;
        minuto--;
    }
    if (minuto < 0) {
        minuto += 60;
        hora--;
    }
    if (hora < 0) {
        hora += 24;
        dia--;
    }

    // Imprime a diferença entre os dois momentos
    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);

    return 0;
}