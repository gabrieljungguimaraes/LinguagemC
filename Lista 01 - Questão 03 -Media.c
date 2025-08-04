#include <stdio.h>

int main() {
    int numero = 0;
    int somatorio = 0;
    int contador = 0;

    while (numero >= 0) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            somatorio += numero;
            contador++;
        }
    }

    if (contador > 0) {
        float media = (float)somatorio / contador;
        printf("Soma: %d\n", somatorio);
        printf("Divisor: %d\n", contador);
        printf("Média: %.2f\n", media);
            } else {
        printf("Nenhum número positivo foi inserido.\n");
    }

    return 0;
}
