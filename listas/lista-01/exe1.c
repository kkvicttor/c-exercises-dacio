#include <stdio.h>

int main() {

int idade, anoat, anonasc;


printf("Ano de nascimento feito apartir da idade e do ano atual\n");

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite o ano em que estamos: ");
scanf("%d", &anoat);

 anonasc = anoat - idade;

 printf("Voce nasceu em %d\n", anonasc);


    return 0;
}