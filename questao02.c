# include <stdio.h>

int main(){
    float distancia, total_de_litros, consumo_medio;
    printf("Difgite a distancia pecorrida em km:");
    scanf("%f", &distancia);
    
    printf("Digite o total de litros consumidos:");
    scanf("%f", &total_de_litros);

    consumo_medio = distancia / total_de_litros;
    printf("o consumo medio é de %2.f km por litro",consumo_medio);

    return 0;
}