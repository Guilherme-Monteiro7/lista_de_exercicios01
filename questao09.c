#include <stdio.h>
#include <math.h>

int main() {
    float numero, valor_absoluto;
    printf("Informe o Número para descobrir seu valor absoluto: ");
    scanf("%f", &numero);

    valor_absoluto = fabs(numero);
    printf("O valor absoluto de %.2f e %.2f\n", numero, valor_absoluto);
    
    return 0;
}