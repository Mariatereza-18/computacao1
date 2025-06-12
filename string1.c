#include <stdio.h>
#include <string.h>

int main()
{
    char nome [3] [100];
    char entrada[100];
    int i, igual=0;

    printf ("digite um nome: ");
    for (i=0; i<3; i++)
    {
        fgets(nome[i], 100, stdin);
    }
    while (1)
    {
        printf("digite um nome: \n");
        fgets(entrada, 100, stdin);
        igual= 0;

        for ( i=0; i<3; i++)
        {
            if (strcmp (entrada, nome[i])== 0)
                igual = 1;
        }
        if (igual)
        {
            printf ("este nome esta entre os 3 primeiros \n");
            break;
        }
        else
        {
            printf("este nome nao esta os 3 primeiros \n");
        }
    }
    return 0;
}

