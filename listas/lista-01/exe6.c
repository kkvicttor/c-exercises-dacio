#include <stdio.h>

int main() {

int numero;

printf("Antecessor e Sucessor \n");

printf("Digite um numero inteiro: ");
scanf("%d", &numero);

printf("Seu antecessor: %d\n", numero - 1);
printf("Seu sucessor: %d\n", numero + 1);

        return 0;
}