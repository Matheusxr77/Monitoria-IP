#include <math.h>
#include <stdio.h>

int main() {
    // Declaração de variáveis
    char i0, i1, i2, i3, i4, i5, i6;
    int valor, regra; 

    // Inicialização das variáveis
    valor = 0, 
    regra = 0;

    // Leitura da sequência de caracteres
    scanf("%c%c%c%c%c%c%c", &i0, &i1, &i2, &i3, &i4, &i5, &i6);

    // Verificação da primeira regra: i0 deve ser '.' ou ':', e i0 deve ser igual a i6
    if ((i0 == '.' || i0 == ':') && (i0 == i6)) {
        valor++;
    }

    // Verificação da segunda regra: i1 deve ser 'b', 'f', 'p' ou espaço
    if (i1 == 'b' || i1 == 'f' || i1 == 'p' || i1 == ' ') {
        valor++;
    }
    
    // Verificação da terceira regra: i2, i3 e i4 devem ser 'A', 'T', 'C', 'R' ou espaço
    if (i2 == 'A' || i2 == 'T' || i2 == 'C' || i2 == 'R' || i2 == ' ') {
        valor++;
    }
    if (i3 == 'A' || i3 == 'T' || i3 == 'C' || i3 == 'R' || i3 == ' ') {
        valor++;
    }
    if (i4 == 'A' || i4 == 'T' || i4 == 'C' || i4 == 'R' || i4 == ' ') {
        valor++;
    }
    
    // Verificação da quarta regra: i5 deve ser 'P'
    if (i5 == 'P') {
        regra++;
    }

    // Verificação final e impressão do resultado
    if (valor == 5 && regra == 1) {
        printf("Valido\n");
    } else if (regra == 0) {
        printf("Invalido\n...Mas pelo menos ganhou um chute\n");
    } else {
        printf("Invalido\n");
    }

    return 0;
}