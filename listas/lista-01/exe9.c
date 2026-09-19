#include <stdio.h>
int main() {

double tempoHoras, velocidadeMedia, distancia, litros;
printf("=== Exercicio 9: litros de combustivel ===\n");
printf("Digite o tempo da viagem em horas: ");
scanf("%lf", &tempoHoras);
printf("Digite a velocidade media em km/h: ");
scanf("%lf", &velocidadeMedia);

distancia = tempoHoras * velocidadeMedia;
litros    = distancia / 12.0;

printf("Litros gastos: %.3f\n\n", litros);

return 0;
}
