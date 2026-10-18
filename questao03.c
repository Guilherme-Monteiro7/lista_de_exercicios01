# include <stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("digite a temperatura em farenheit:");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) /1.8;
    printf("a temperatura em celsius é de %2.f",celsius);

    return 0;

}