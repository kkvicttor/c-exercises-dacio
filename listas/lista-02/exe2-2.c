#include <stdio.h>
int main() {
          double valor, A;
        int n = 0;   

        printf("=== Exercicio 2: notacao cientifica ===\n");
        printf("Digite um numero positivo: ");
        scanf("%lf", &valor);

        if (valor > 0) {
            A = valor;
            while (A >= 10) {
                A = A / 10;
                n = n + 1;
            }
            while (A < 1) {
                A = A * 10;
                n = n - 1;
            }
            printf("%f = %.4f x 10^%d\n\n", valor, A, n);
        } else {
            printf("Valor invalido: digite um numero maior que zero.\n\n");
        }
        return 0;
        // precisei de muita ajuda da IA n entendi direito como fazer funcionar, mesmo que nao tenha entendido 100% do que tava acontecendo serviu de aprendizao
        
    }
