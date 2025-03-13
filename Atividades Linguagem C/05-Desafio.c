#include <stdio.h>

int main() {

   int n1, n2, n3;
   printf("Digite 3 numeros: ");
   scanf("%d %d %d", &n1, &n2, &n3);

   printf("%d\n", (n1 > n2) && (n1 < n3));
   printf("%d\n", (n2 % 2 == 0) && (n3 % 2 != 0));
   printf("%d\n", (n1 != n3));

    return 0;
}
