#include <stdio.h>
#include <math.h>

int main() {
    float a, b, h;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &a);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &b);

    h = sqrt((a * a) + (b * b));

    printf("A medida da hipotenusa e: %.2f\n", h);

    return 0;
}