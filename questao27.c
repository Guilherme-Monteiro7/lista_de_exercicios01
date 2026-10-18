
#include <stdio.h>

int main() {
    int n, i = 1, divisores = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    while (i <= n) {
        if (n % i == 0) {
            divisores++;
        }
        i++;
    }

    if (divisores == 2) {
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d nao e um numero primo.\n", n);
    }

    return 0;
}
