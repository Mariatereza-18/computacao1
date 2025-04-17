#include <stdio.h>
int main()
{

    int num, maior;


    printf("digite numero positivo, para sair digite 0:");
    scanf("%d", &num);

    maior = num;
    while (num > 0)
    {
        if(num > maior)
        {
            maior = num;
        }

        printf ("Digite numero positivo ou 0/numero negativo para sair: ", num);
        scanf ("%d", &num);

    }
    printf ("Maior numero digitado: %d\n", maior);
    return 0;
}



