#include <stdio.h>
int main () {
    double graus, radianos;
    const double pi = 3.141592;   

printf("Graus pra Radianos\n");
printf("Digite o angulo em graus: ");
 scanf("%lf", &graus);
radianos = graus * pi / 180.0;

printf("Angulo: %.4f radianos\n\n", radianos);

 return 0;

}