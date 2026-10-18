
#include <stdio.h>

int main() {
    int n, i = 1, soma = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    printf("Divisores de %d:\n", n);

    while (i <= n) {
        if (n % i == 0) {
            printf("%d\n", i);
            soma += i;
        }
        i++;
    }

    printf("Soma dos divisores: %d\n", soma);

    return 0;
}
