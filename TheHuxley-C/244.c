#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char texto[50], letra;
    int ocorrencias, i;
    
    // Inicialização de variáveis
    ocorrencias = 0;
    
    // Solicita ao usuário inserir uma string (até 49 caracteres) e armazena em 'texto'
    fgets(texto, sizeof(texto), stdin);
    
    // Solicita ao usuário inserir uma letra e armazena em 'letra'
    scanf("%c", &letra);
    
    // Loop para percorrer cada caractere na string 'texto'
    for (i = 0; i < strlen(texto); i++) {
        // Verifica se o caractere atual é igual à letra fornecida pelo usuário
        if (texto[i] == letra) {
            // Incrementa o contador de ocorrências
            ocorrencias++;
        }
    }
    
    // Imprime o número total de ocorrências da letra na string
    printf("%d\n", ocorrencias);
    
    return 0;
}