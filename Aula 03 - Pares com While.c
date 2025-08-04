#include <stdio.h>
// Mostre números pares de 2 a 2000 usando while.
int main(){
    int i = 2;
    while(i <= 2000){
        if(i % 2 == 0){ //verificando se é par
            printf("%d \n", i);   
            
        }
        i++;
    }
    return 0;
}
