#include <stdio.h>

int main() {
    float largura, altura, profundidade, volume;
    printf("informe a Largura: ");
    scanf("%f", &largura);

    printf("informe a Altura: ");
    scanf("%f", &altura);

    printf("Informe a Profundidade: ");
    scanf("%f", &profundidade);

    volume = (largura * altura * profundidade);
    printf(" o volume do paralelepípedo é igual a %2.f",volume);
    return 0;
}