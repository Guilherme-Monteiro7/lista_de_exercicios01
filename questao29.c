
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Digite a quantidade de algarismos: ");
    scanf("%d", &n);

    int digitos[n];
    long long numero = 0;

    printf("Digite os algarismos (de 0 a 9):\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &digitos[i]);
    }

    for (i = 0; i < n; i++) {
        numero = numero * 10 + digitos[i];
    }

    printf("Numero construido: %lld\n", numero);

    return 0;
}
