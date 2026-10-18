
#include <stdio.h>

int main() {
    float saldoInicial, operacao;
    float creditos = 0, debitos = 0;
    float taxa, saldoFinal;

    printf("Saldo inicial? ");
    scanf("%f", &saldoInicial);

    printf("Operacao? ");
    scanf("%f", &operacao);

    while (operacao != 0) {
        if (operacao > 0) {
            creditos += operacao;
        } else {
            debitos += -operacao;
        }

        printf("Operacao? ");
        scanf("%f", &operacao);
    }

    taxa = debitos * 0.0035;
    saldoFinal = saldoInicial + creditos - debitos - taxa;

    printf("\nTotal de creditos ....: R$ %.2f\n", creditos);
    printf("Total de debitos .....: R$ %.2f\n", debitos);
    printf("Taxa paga ............: R$ %.2f\n", taxa);
    printf("Saldo final ..........: R$ %.2f\n", saldoFinal);

    return 0;
}
