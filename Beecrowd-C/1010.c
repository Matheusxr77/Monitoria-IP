#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int p1, p2, np1, np2;  // p1, p2 são os códigos dos produtos; np1, np2 são as quantidades compradas
    double vp1, vp2, pagar;  // vp1, vp2 são os preços unitários dos produtos; pagar é o valor total a ser pago
    
    // Solicita ao usuário que insira o código do produto, a quantidade e o preço unitário para o primeiro produto
    scanf("%d%d%lf", &p1, &np1, &vp1);

    // Solicita ao usuário que insira o código do produto, a quantidade e o preço unitário para o segundo produto
    scanf("%d%d%lf", &p2, &np2, &vp2);

    // Calcula o valor total a ser pago somando o produto das quantidades e preços unitários de ambos os produtos
    pagar = (np1 * vp1) + (np2 * vp2);

    // Exibe o resultado formatado com duas casas decimais na saída padrão
    printf("VALOR A PAGAR: R$ %.2lf\n", pagar);

    return 0;
}