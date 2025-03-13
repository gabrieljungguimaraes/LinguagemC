#include <stdio.h>

int main() {

   int n1;
   int n2;
   int n3;
   int p;
   float m;

   printf("Digite o Primeiro Numero: ");
   scanf("%d", &n1);

   printf("Digite o Segundo Numero: ");
   scanf("%d", &n2);

   printf("Digite o Terceiro Numero: ");
   scanf("%d", &n3);

   p = (n1 * n2) * n3 ;
   m = (n1 + n2 + n3) / 3;

   printf("%d Produto: \n", p);
   printf("%.2f Media: ", m);


    return 0;
}
