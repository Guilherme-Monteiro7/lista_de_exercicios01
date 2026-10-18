
#include <stdio.h>

int main() {
    int n, digito, soma = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    while (n > 0) {
        digito = n % 10;
        soma += digito;
        n = n / 10;
    }

    printf("Soma dos digitos: %d\n", soma);

    return 0;
}
