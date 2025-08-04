#include <stdio.h>
// Escrever um algoritmo que lê 5 valores para a, um de cada vez,
// e conta quantos destes valores são negativos, escrevendo esta informação.
int main(){
    int i = 1;
    int numero = 0;
    int negativos = 0;
    
    while(i <= 5){ // condição enquanto para que i vá até 5 !
        printf("Digite um numero:");
        scanf("%d", &numero);
        if(numero < 0 ){ // se o numero for menor que 0 ele conta negativos + 1 !
        negativos++;
        }
        i++; // faz o i contar mais 1 pra chegar no 5 da condição e nao ficar em loop !
    }
    printf("%d", negativos); // imprime os negativos 
    return 0;
}
