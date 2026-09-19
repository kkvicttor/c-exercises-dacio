#include <stdio.h>

int main () {

    double fahrenheit, celsius;
   printf("Escreva a temperatura em Celsius: ");
   scanf("%lf", &celsius);
   fahrenheit = celsius * 9.0 / 5.0 + 32.0;
   printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);
   
    return 0;
}