#include <stdio.h>

int main() {
    // Declaração de variáveis
    int total, adulto, crianca, convidado, total_criancas, total_adultos;
    
    // Leitura da capacidade total da piscina
    scanf("%d", &total);
    
    // Inicialização das variáveis
    total_criancas = 0;
    total_adultos = 0;

    // Leitura inicial do número de adultos, crianças e convidados
    scanf("%d\n%d\n%d", &adulto, &crianca, &convidado);
        
    // Loop principal para o controle de acesso
    while (adulto >= 0) {
        // Atualização do total de crianças e adultos
        total_criancas = total_criancas + crianca + convidado;
        total_adultos = total_adultos + adulto;
    
        // Verificação das condições de acesso
        if (total_criancas <= total || (crianca == 0 && adulto >= 1)) {
            printf("Acesso permitido!\n");
        } else if (total_criancas > total && convidado > 0) {
            printf("Acesso permitido devido à presença de convidado(s).\n");
        } else if (total_criancas > total) {
            total_criancas = total_criancas - crianca;
            total_adultos = total_adultos - adulto;
            printf("Capacidade máxima de crianças atingida/excedida.\n");
            printf("Tem %d criança(s) a mais que as %d permitidas.\n", (total_criancas - total), total);
        }
    
        // Impressão do número de adultos e crianças presentes
        printf("Adultos na piscina: %d\n", total_adultos);
        printf("Crianças na piscina: %d\n", total_criancas);
        printf("***\n");
        
        // Leitura dos próximos valores de adultos, crianças e convidados
        scanf("%d\n%d\n%d", &adulto, &crianca, &convidado);
    }

    return 0;
}