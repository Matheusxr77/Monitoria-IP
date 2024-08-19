/* Faça um programa em linguagem C que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são calculadas como x = (- b + sqrt(Delta))/(2a) em que A b-4ac e ax +bx+c=0 representa uma equação do segundo grau. 
A variável a deve ser diferente de zero. Caso seja igual, imprima a mensagem "Não é equação de segundo grou", caso contrário:
- Se Delta < 0 não existe real. Imprima a mensagem "Não existe raiz".
- Se Delta = 0 existe uma raiz real. Imprima a raiz e a mensagem "Roiz único".
- Se Delta > 0 existem duas raízes reais. Imprima as raizes. */

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Não é equação de segundo grau\n");
    } else {
        delta = b*b - 4*a*c;
        if (delta < 0) {
            printf("Não existe raiz\n");
        } else if (delta == 0) {
            x1 = -b/(2*a);
            printf("Raiz única: %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Raiz 1: %.2f\n", x1);
            printf("Raiz 2: %.2f\n", x2);
        }
    }

    return 0;
}