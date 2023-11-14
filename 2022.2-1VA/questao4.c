/* Escreva um programa em linguagem C que dada uma string de caracteres representando uma fita de DNA, retorne seu 
completo de RNA
(i,.e., uma nova string por transcrição de RNA). 
As fitas de DNA e RNA são uma sequência de nucleotídeos.
- Os quatro nucleotídeos encontrados no DNA são adenina (A), citosina (C), guanina (G) e timina (T).
- Os quatro nucleotídeos encontrados no RNA são adenina (A), citosina (C), guanina (G) e uracila (U).
Dada uma fita de DNA, sua fita de RNA transcrita é formada pela substituição de cada nuclotídeo por seu complemento: 
G->C, C->G, T->A, A->U. */

#include <stdio.h>
#include <string.h>

// retornaR o complemento do nucleotídeo fornecido
char complementoNucleotideo (char nucleotideo) {
    // observando cada caso para a troca
    switch (nucleotideo) {
        case 'G':
            return 'C';
        case 'C':
            return 'G';
        case 'T':
            return 'A';
        case 'A':
            return 'U';
        default:
            return '\0'; // caso o nucleotídeo não for válido (não encontrado no DNA)
    }
}

// transcrever a fita de DNA para a fita de RNA
void transcreverRNA (char dna[], char rna[], int tamanho) {
    int i;

    // transcrevendo o rna
    for (i = 0; i < tamanho; i++) {
        rna[i] = complementoNucleotideo(dna[i]);
    }
}

int main() {
    char dna[100]; 

    printf("Digite a sequencia da fita de DNA: ");
    scanf("%s", &dna);

    int tamanho = strlen(dna);
    // adiciona 1 para o caractere nulo '\0'
    char rna[tamanho + 1]; 

    transcreverRNA(dna, rna, tamanho);
    // adiciona o caractere nulo para indicar o fim da string
    rna[tamanho] = '\0'; 

    printf("Fita de DNA: %s\n", dna);
    printf("Fita de RNA: %s\n", rna);

    return 0;
}