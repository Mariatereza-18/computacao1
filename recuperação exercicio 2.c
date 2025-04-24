#include<stdio.h>

int main(){

        int numero_base, valor_inicial, valor_final, i=0;
        int soma = 0;

        printf("Digite um numero inteiro de base: ");
        scanf("%d", &numero_base);
        printf("Digite o valor_inicial do intervalo: ");
        scanf("%d", &valor_inicial);
        printf("Digite o valor_final do intervalo: ");
        scanf("%d", &valor_final);

        for(i= valor_inicial; i<=valor_final; i=i+1)
        {
        if(i%numero_base ==0)
        {
        soma = soma+i;
        }
        }
        printf("a soma do mutiplos de %d entre %d e %d e: %d\n", numero_base, valor_inicial, valor_final, soma);




        return 0;
}


