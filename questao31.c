
#include <stdio.h>

int main() {
    int num;
    int pares = 0, impares = 0;
    int maiorPar, menorPar;
    int maiorImpar, menorImpar;

    printf("Digite numeros naturais (0 para encerrar): ");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 2 == 0) {
            if (pares == 0) {
                maiorPar = num;
                menorPar = num;
            } else {
                if (num > maiorPar) {
                    maiorPar = num;
                }

                if (num < menorPar) {
                    menorPar = num;
                }
            }

            pares++;
        } else {
            if (impares == 0) {
                maiorImpar = num;
                menorImpar = num;
            } else {
                if (num > maiorImpar) {
                    maiorImpar = num;
                }

                if (num < menorImpar) {
                    menorImpar = num;
                }
            }

            impares++;
        }

        printf("Digite outro numero (0 para encerrar): ");
        scanf("%d", &num);
    }

    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    if (pares > 0) {
        printf("Maior numero par: %d\n", maiorPar);
        printf("Menor numero par: %d\n", menorPar);
    } else {
        printf("Nao existem numeros pares.\n");
    }

    if (impares > 0) {
        printf("Maior numero impar: %d\n", maiorImpar);
        printf("Menor numero impar: %d\n", menorImpar);
    } else {
        printf("Nao existem numeros impares.\n");
    }

    return 0;
}
