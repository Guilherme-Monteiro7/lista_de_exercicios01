#include <stdio.h>

int main() {
    int total_segundos,hora, minutos, segundos;
    printf("Informe o Total de Segundos: ");
    scanf("%d", &total_segundos);
    
    hora = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;
    printf( " o total de segundos informados correspondem a %d hora, %d minutos e %d segundos\n", hora, minutos, segundos);
    return 0;
}