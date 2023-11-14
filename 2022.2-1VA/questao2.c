/* Escreva uma função em C que retorna os caracteres de uma string na ordem reversa.
Obs.: A função deverá retornar uma cadeia de caracteres e não imprimi-la na tela. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// função que retorna uma string contendo os caracteres da string original na ordem reversa
char* reversa(char* str) {
    int i;
    int tamanho = strlen(str);

    // alocar memória para a nova string reversa
    char* reversa = (char*)malloc((tamanho + 1) * sizeof(char));

    // verificar se a string reversa está vazia
    if (reversa == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    
    // preencher a nova string com os caracteres da string original em ordem reversa
    for (i = 0; i < tamanho; i++) {
        reversa[i] = str[tamanho - 1 - i];
    }
    
    // adicionar o caractere nulo no final da nova string para indicar o fim da cadeia de caracteres
    reversa[tamanho] = '\0';

    // retornar o ponteiro para a nova string
    return reversa;
}

int main() {
    char stringInicial[] = "Exemplo de String";
    char* resultado = reversa(stringInicial);
    
    printf("String original: %s\n", stringInicial);
    printf("String reversa: %s\n", resultado);

    // liberar a memória alocada
    free(resultado); 

    return 0;
}