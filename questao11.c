#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Digite o salario atual do funcionario:  ");
    scanf("%f", &salario);

    novo_salario = salario * 1.05;

    if (salario <= 750.00) {
        novo_salario += 100.00;
    }

    printf("O novo salario e: R$ %.2f\n", novo_salario);

    return 0;
}