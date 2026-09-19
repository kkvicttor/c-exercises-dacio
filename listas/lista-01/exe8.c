#include <stdio.h>

int main() {
        int segt, horas, minutos, segundos;

        printf("Conversor de segundos pra horas e minutos\n");
        printf("Digite quantos segundos deseja converter: ");
        scanf("%d", &segt);

        horas    = segt / 3600;        
        minutos  = (segt % 3600) / 60;  
        segundos = segt % 60;            

        printf("%d:%d:%d\n\n", horas, minutos, segundos);

    return 0;
}