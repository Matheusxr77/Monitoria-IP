/* Implemente o registro de reservas de assentos de uma aeronave utilizando matrizes em linguagem C. A aeronave possui os assentos A, B, C, D, E, e F dispostos em fileiras de 1 a 5 para a classe Executiva, e fileiras de 1 a 32 para classe Económica. O seu programa deve receber 10 solicitações seguidas de reserva de assento. Caso o assento esteja disponivel, a reserva deve ser registrada. Caso contrário, o programa deve indicar a mensagem "poltrona indisponivel". Cada solicitação de reserva será feito pelo usuário através de uma cadeia de caracteres no formato "<closse><assento><fileira>". Onde <classe> assume o valor "X" para designar poltronas da classe Executivas, e "C" para designar poltronas da classe Econômica; <assento> é uma letra entre "A" e "F"; e <fileira> é um número entre 1 e 32. Dessa maneira, a sequência de caracteres "CC14" refere-se a uma solicitação de reserva do assento C da fileira 14 na classe Econômica. */

#include <stdio.h>
#include <string.h>

#define EXECUTIVA_FILEIRAS 5
#define ECONOMICA_FILEIRAS 32
#define ASSENTOS 6

void inicializarAssentos(int executiva[EXECUTIVA_FILEIRAS][ASSENTOS], int economica[ECONOMICA_FILEIRAS][ASSENTOS]) {
    // Inicializa todos os assentos como disponíveis (0)
    for (int i = 0; i < EXECUTIVA_FILEIRAS; i++) {
        for (int j = 0; j < ASSENTOS; j++) {
            executiva[i][j] = 0;
        }
    }
    for (int i = 0; i < ECONOMICA_FILEIRAS; i++) {
        for (int j = 0; j < ASSENTOS; j++) {
            economica[i][j] = 0;
        }
    }
}

int reservarAssento(char classe, char assento, int fileira, int executiva[EXECUTIVA_FILEIRAS][ASSENTOS], int economica[ECONOMICA_FILEIRAS][ASSENTOS]) {
    int coluna = assento - 'A'; // Converte a letra do assento para índice (0-5)

    if (classe == 'X' && fileira >= 1 && fileira <= EXECUTIVA_FILEIRAS) {
        if (executiva[fileira - 1][coluna] == 0) {
            executiva[fileira - 1][coluna] = 1;
            return 1; // Reserva feita com sucesso
        }
    } else if (classe == 'C' && fileira >= 1 && fileira <= ECONOMICA_FILEIRAS) {
        if (economica[fileira - 1][coluna] == 0) {
            economica[fileira - 1][coluna] = 1;
            return 1; // Reserva feita com sucesso
        }
    }
    return 0; // Poltrona indisponível ou entrada inválida
}

int main() {
    int executiva[EXECUTIVA_FILEIRAS][ASSENTOS];
    int economica[ECONOMICA_FILEIRAS][ASSENTOS];

    inicializarAssentos(executiva, economica);

    for (int i = 0; i < 10; i++) {
        char reserva[10];
        printf("Solicitacao de reserva #%d: ", i + 1);
        scanf("%s", reserva);

        char classe = reserva[0];
        char assento = reserva[1];
        int fileira = atoi(&reserva[2]);

        if (reservarAssento(classe, assento, fileira, executiva, economica)) {
            printf("Reserva feita com sucesso para o assento %c%c%d.\n", classe, assento, fileira);
        } else {
            printf("Poltrona indisponivel.\n");
        }
    }

    return 0;
}
