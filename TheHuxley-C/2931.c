#include <stdio.h>

int main() {
    // Declaração de variáveis
    int idade_adotar, idade_adotante;
    char ascendente, conjunta, casado, desconhecido, consentimento_desconhecido, consentimento_maior;
    
    // Leitura dos valores fornecidos pelo usuário
    scanf("%d\n%c\n%c\n%c\n%d\n%c\n%c\n%c", &idade_adotante, &ascendente, &conjunta, &casado, &idade_adotar, &desconhecido, &consentimento_desconhecido, &consentimento_maior);

    // Verificação das condições para adoção
    if (idade_adotante >= 18 && ascendente == 'N' && (conjunta == 'S' && casado == 'S' || conjunta == 'N') && idade_adotante >= idade_adotar + 16 &&  (desconhecido == 'N' && consentimento_desconhecido == 'S' || desconhecido == 'S') && (idade_adotar < 12 || consentimento_maior == 'S')) {
        // Impressão do resultado
        printf("Pode adotar");
    } else {
        // Impressão do resultado alternativo
        printf("Nao pode adotar");
    }

    return 0;
}