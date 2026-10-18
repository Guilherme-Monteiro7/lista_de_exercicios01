#include <stdio.h>

int main() {
    float num1, num2;

    printf("Informe o Primeiro número: ");
    scanf("%f", &num1);

    printf("Informe o Segundo número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O maior numero é: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero é: %.2f\n", num2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}