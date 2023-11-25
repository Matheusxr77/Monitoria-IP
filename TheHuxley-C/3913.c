#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int soldados_aliados, tanques_aliados, avioes_aliados, misseis_aliados;
    int soldados_inimigos, tanques_inimigos, avioes_inimigos, misseis_inimigos;
    int soldados_reforcos, tanques_reforcos, avioes_reforcos, misseis_reforcos;
    int tropas_aliadas, tropas_inimigas;

    // Leitura dos valores
    scanf("%d %d %d %d", &soldados_aliados, &tanques_aliados, &avioes_aliados, &misseis_aliados);
    scanf("%d %d %d %d", &soldados_inimigos, &tanques_inimigos, &avioes_inimigos, &misseis_inimigos);
    scanf("%d %d %d %d", &soldados_reforcos, &tanques_reforcos, &avioes_reforcos, &misseis_reforcos);
    
    // Cálculo do total de forças para ambos os lados
    tropas_aliadas = soldados_aliados + tanques_aliados + avioes_aliados + misseis_aliados;
    tropas_inimigas = soldados_inimigos + tanques_inimigos + avioes_inimigos + misseis_inimigos + soldados_reforcos + tanques_reforcos + avioes_reforcos + misseis_reforcos;
    
    // Tomada de decisão com base no equilíbrio de forças
    if (tropas_aliadas > ((tropas_inimigas / 2) + tropas_inimigas)) {
        printf("Avancar");
    } else if (((tropas_inimigas / 2) + tropas_inimigas) > ((tropas_aliadas / 2) + tropas_aliadas)) {
        printf("Recuar");
    } else {
        printf("Permanecer");
    }

    return 0;
}