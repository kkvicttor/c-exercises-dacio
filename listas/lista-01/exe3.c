#include <stdio.h>

int main () {

double reais, cotacao, dolar;

printf("Escreva o valor em real:R$ ");
scanf("%lf", &reais);

printf("Escreva a cotação atual do dolar: ");
scanf("%lf", &cotacao);

dolar = reais / cotacao;
printf("O valor após a cotacao do dolar é:$%.2f\n", dolar);

    return 0;
}