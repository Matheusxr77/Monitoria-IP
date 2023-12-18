#include <stdio.h>

// Função para trocar os valores de duas variáveis usando ponteiros
void troca (int* a, int* b) {
    // Variável temporária para armazenar o valor de a
    int aux;
    
    // Armazena o valor de a na variável temporária
    aux = *a;
    
    // Atribui o valor de b a a
    *a = *b;
    
    // Atribui o valor armazenado em aux a b, efetuando a troca
    *b = aux;
}

int main() {
    // Declaração de variáveis
    int a, b;

    // Entrada de dados: solicita ao usuário dois valores inteiros
    scanf("%d %d", &a, &b);
    
    // Exibe os valores iniciais das variáveis a e b
    printf("a: %d b: %d\n", a, b);
    
    // Chama a função troca, passando os endereços de a e b para efetuar a troca
    troca(&a, &b);
    
    // Exibe os valores após a troca
    printf("a: %d b: %d", a, b);
    
    return 0;
}