#include <stdio.h>

int main() {
   double kmh, ms;
   printf("Escreva a velocidade em km/h: ");
   scanf("%lf", &kmh);
   ms = kmh / 3.6;
   printf("A velocidade em m/s e: %.2f\n", ms);
    return 0;
}