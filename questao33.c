
#include <stdio.h>

int main() {
    float preco, total = 0;
    float desconto, valorDesconto, valorFinal;
    int percentual;

    printf("Digite o preco da mercadoria (0 para encerrar): ");
    scanf("%f", &preco);

    while (preco != 0) {
        if (preco > 0) {
            total += preco;
        } else {
            printf("Preco invalido! Digite um valor positivo.\n");
        }

        printf("Digite o preco da mercadoria (0 para encerrar): ");
        scanf("%f", &preco);
    }

    if (total < 50) {
        percentual = 5;
    } else if (total < 100) {
        percentual = 10;
    } else if (total <= 200) {
        percentual = 15;
    } else {
        percentual = 20;
    }

    desconto = percentual / 100.0;
    valorDesconto = total * desconto;
    valorFinal = total - valorDesconto;

    printf("\n=== RESUMO DA COMPRA ===\n");
    printf("Total da compra: R$ %.2f\n", total);
    printf("Desconto: %d%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
