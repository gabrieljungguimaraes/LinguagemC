#include <stdio.h>
#include <locale.h>

int main(){
    int num, opc, res;
    
        printf("Digite um número:");
        scanf("%d", &num);
        
        printf("\nDigite um Opção:");
        
        printf("\nOpção 1 - Dobrar o Valor:");
        printf("\nOpção 2 - Triplicar o Valor:");
        printf("\nOpção 3 - Dividir o Valor:");
        printf("\nOpção escolhida: ");
        
        scanf("%d", &opc);
        
        
    
        if(opc == 1){
        res = num *2;
        printf("Dobro do Valor: %d", res);
        }
        else if(opc == 2){
        res = num *3;
        printf("Triplo do Valor: %d", res);
        }
        else if(opc == 3){
        res = num /2;
        printf("Metade do Valor: %d", res);
        }
        else{
        printf("Opção Invalida");
    }
       
    return 0;
}
