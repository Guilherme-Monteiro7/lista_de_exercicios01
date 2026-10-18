
#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }

    return 0;
}
