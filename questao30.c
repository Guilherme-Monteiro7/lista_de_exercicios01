
#include <stdio.h>

int main() {
    int num, menor, maior;

    printf("Digite um numero positivo (0 para encerrar): ");
    scanf("%d", &num);

    if (num != 0) {
        menor = num;
        maior = num;

        while (num != 0) {
            if (num < menor) {
                menor = num;
            }

            if (num > maior) {
                maior = num;
            }

            printf("Digite um numero positivo (0 para encerrar): ");
            scanf("%d", &num);
        }

        printf("Menor: %d\n", menor);
        printf("Maior: %d\n", maior);
    }

    return 0;
}
