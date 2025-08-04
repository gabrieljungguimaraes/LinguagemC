// inlcuir a biblioteca
#include <stdio.h>
// numero: 1, 2, 5, 10, 0
// somatorio: 17
int main(){
    int numero = 1;
    int somatorio = 0;
    while(numero != 0){
        printf("Informe o numero: \n");
        scanf("%d", &numero);
        somatorio = somatorio + numero;
    }
    printf("Resultado da soma: %d \n", somatorio);
    return 0;
}
