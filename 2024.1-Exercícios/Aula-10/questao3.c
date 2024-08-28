/* Desenvolva um programa em C que utilize registros para representar informações de contatos em uma agenda. Cada contato deve ter um nome, número de telefone e endereço de e-mail. O programa deve permitir ao usuário pesquisar contatos por nome e exibir a lista de contatos cadastrados. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char telefone[15];
    char email[100];
} Contato;

int main() {
    int n;
    printf("Digite o número de contatos: ");
    scanf("%d", &n);

    Contato *contatos = (Contato *) malloc(n * sizeof(Contato));
    if (contatos == NULL) {
        printf("Memória insuficiente.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do contato %d: ", i + 1);
        scanf(" %[^\n]", contatos[i].nome);
        printf("Digite o telefone do contato %d: ", i + 1);
        scanf(" %[^\n]", contatos[i].telefone);
        printf("Digite o e-mail do contato %d: ", i + 1);
        scanf(" %[^\n]", contatos[i].email);
    }

    printf("Lista de contatos cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("E-mail: %s\n", contatos[i].email);
        printf("\n");
    }

    char nome[100];
    printf("Digite o nome do contato que deseja pesquisar: ");
    scanf(" %[^\n]", nome);

    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            printf("Contato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("E-mail: %s\n", contatos[i].email);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }

    free(contatos);

    return 0;
}