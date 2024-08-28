/* Escreva um programa em C que utilize uma estrutura de registro para representar alunos. Cada aluno deve ter os seguintes campos: nome, idade e média. O programa deve permitir ao usuário cadastrar vários alunos, exibir a lista de alunos cadastrados e calcular a média da turma. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
    float media;
} Aluno;

int main() {
    int n;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    Aluno *alunos = (Aluno *) malloc(n * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Memória insuficiente.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("Digite a média do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }

    printf("Lista de alunos cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Média: %.2f\n", alunos[i].media);
        printf("\n");
    }

    float media_turma = 0;
    for (int i = 0; i < n; i++) {
        media_turma += alunos[i].media;
    }
    media_turma /= n;
    printf("Média da turma: %.2f\n", media_turma);

    free(alunos);

    return 0;
}