/* Crie um programa em C que utilize registros para representar produtos em um estoque. Cada produto deve ter um código, nome, preço e quantidade em estoque. O programa deve permitir ao usuário cadastrar novos produtos, exibir a lista de produtos cadastrados e atualizar a quantidade em estoque de um produto específico. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[100];
    float preco;
    int quantidade;
} Produto;

int main() {
    int n;
    printf("Digite o número de produtos: ");
    scanf("%d", &n);

    Produto *produtos = (Produto *) malloc(n * sizeof(Produto));
    if (produtos == NULL) {
        printf("Memória insuficiente.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o código do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", produtos[i].nome);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
    }

    printf("Lista de produtos cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Código: %d\n", produtos[i].codigo);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preço: R$ %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("\n");
    }

    int codigo;
    printf("Digite o código do produto que deseja atualizar a quantidade em estoque: ");
    scanf("%d", &codigo);

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == codigo) {
            int quantidade;
            printf("Digite a nova quantidade em estoque: ");
            scanf("%d", &quantidade);
            produtos[i].quantidade = quantidade;
            break;
        }
    }

    printf("Lista de produtos atualizada:\n");
    for (int i = 0; i < n; i++) {
        printf("Código: %d\n", produtos[i].codigo);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preço: R$ %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("\n");
    }

    free(produtos);

    return 0;
}