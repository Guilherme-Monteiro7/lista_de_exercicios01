#include <stdio.h>

int main() {
    float n1, n2, n3, maior;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    maior = n1;
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    printf("O maior numero e: %.2f\n", maior);

    return 0;
}