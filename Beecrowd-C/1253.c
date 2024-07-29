#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    int n, i, shift, tamanho, original, decoded;
    char encoded[51];

    // Lê o número de casos de teste
    scanf("%d", &n); 
    getchar(); // Captura o newline após o número N

    // Loop
    while (n--) {
        // Lê a linha da string codificada
        fgets(encoded, sizeof(encoded), stdin); 
        
        // Lê o número de posições de deslocamento
        scanf("%d", &shift); 
        getchar(); // Captura o newline após o número shift

        // Lê o tamanho da string
        tamanho = strlen(encoded);
        
        // Loop 
        for (i = 0; i < tamanho; i++) {
            if (encoded[i] >= 'A' && encoded[i] <= 'Z') {
                // Calcula a letra decodificada
                original = encoded[i] - 'A';

                decoded = (original - shift + 26) % 26; // Garante que não seja negativo
                encoded[i] = 'A' + decoded;
            }
        }

        // Remove o newline no final da string
        encoded[strcspn(encoded, "\n")] = '\0';

        // Imprime a string decodificada
        printf("%s\n", encoded); 
    }

    return 0;
}