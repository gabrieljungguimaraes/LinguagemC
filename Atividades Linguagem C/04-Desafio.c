#include <stdio.h>

int main() {

   int n1, n2;
   int soma, subt, mult;
   float div;

   printf("Digite dois Numeros: ");
   scanf("%d %d", &n1, &n2);

   soma = n1 + n2;
   subt = n1 - n2;
   mult = n1 * n2;
   div = n1 / n2;

   printf("Soma: %d", soma);
   printf("\nSubtracao: %d", subt);
   printf("\nMultiplicacao: %d", mult);
   printf("\nDivisao: %.2f",div);




    return 0;
}
