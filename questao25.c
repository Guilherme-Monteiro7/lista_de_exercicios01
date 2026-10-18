
#include <stdio.h>

int main() {
    int n, i = 1, impar = 1, soma = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    while (i <= n) {
        soma += impar;
        impar += 2;
        i++;
    }

    printf("Quadrado: %d\n", soma);

    return 0;
}
