
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcao;

    do {
        printf("\n=== MENU DE OPERACOES ===\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            case 2:
            case 3:
            case 4:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);

                printf("Digite o segundo numero: ");
                scanf("%f", &num2);

                switch (opcao) {
                    case 1:
                        resultado = num1 + num2;
                        printf("Resultado: %.2f\n", resultado);
                        break;

                    case 2:
                        resultado = num1 - num2;
                        printf("Resultado: %.2f\n", resultado);
                        break;

                    case 3:
                        resultado = num1 * num2;
                        printf("Resultado: %.2f\n", resultado);
                        break;

                    case 4:
                        if (num2 == 0) {
                            printf("Erro: Nao e possivel dividir por zero.\n");
                        } else {
                            resultado = num1 / num2;
                            printf("Resultado: %.2f\n", resultado);
                        }
                        break;
                }
                break;

            case 5:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 5);

    return 0;
}
