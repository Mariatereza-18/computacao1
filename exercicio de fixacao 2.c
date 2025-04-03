#include<stdio.h>
int main()
{

    float n1, n2, n3,
          media;

    printf("Digite as tres notas; ");
    scanf("% %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >=8)
    {
        printf("Aprovado distinção. ");
    }
     else if(media >=6)
    {
        printf("Aprovado direto. ");
    }
     else if(media >=4)
    {
        printf("vai para final. ");
    }
    else
    {
        printf("Reprovado direto. ");
    }

    return 0;
}
