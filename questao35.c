
#include <stdio.h>

int main() {
    int classe, opcao;
    float valor, resultado;

    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Peso\n");
        printf("2 - Volume\n");
        printf("3 - Comprimento\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &classe);

        if (classe >= 1 && classe <= 3) {
            printf("\n=== MENU DE CONVERSOES ===\n");

            switch (classe) {
                case 1:
                    printf("1 - Libra para Quilograma\n");
                    printf("2 - Quilograma para Libra\n");
                    printf("3 - Onca para Grama\n");
                    printf("4 - Grama para Onca\n");
                    break;

                case 2:
                    printf("1 - Galao para Litro\n");
                    printf("2 - Litro para Galao\n");
                    printf("3 - Onca liquida para Mililitro\n");
                    printf("4 - Mililitro para Onca liquida\n");
                    break;

                case 3:
                    printf("1 - Milha para Quilometro\n");
                    printf("2 - Quilometro para Milha\n");
                    printf("3 - Jarda para Metro\n");
                    printf("4 - Metro para Jarda\n");
                    break;
            }

            printf("Escolha uma conversao: ");
            scanf("%d", &opcao);

            if (opcao >= 1 && opcao <= 4) {
                printf("Digite o valor a converter: ");
                scanf("%f", &valor);

                switch (classe) {
                    case 1:
                        switch (opcao) {
                            case 1: resultado = valor * 0.4536; break;
                            case 2: resultado = valor / 0.4536; break;
                            case 3: resultado = valor * 28.3495; break;
                            case 4: resultado = valor / 28.3495; break;
                        }
                        break;

                    case 2:
                        switch (opcao) {
                            case 1: resultado = valor * 3.7854; break;
                            case 2: resultado = valor / 3.7854; break;
                            case 3: resultado = valor * 29.5735; break;
                            case 4: resultado = valor / 29.5735; break;
                        }
                        break;

                    case 3:
                        switch (opcao) {
                            case 1: resultado = valor * 1.6093; break;
                            case 2: resultado = valor / 1.6093; break;
                            case 3: resultado = valor * 0.9144; break;
                            case 4: resultado = valor / 0.9144; break;
                        }
                        break;
                }

                printf("Resultado: %.4f\n", resultado);
            } else {
                printf("Opcao de conversao invalida!\n");
            }

        } else if (classe == 4) {
            printf("Programa encerrado!\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (classe != 4);

    return 0;
}
