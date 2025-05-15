#include<stdio.h>

int ultimos_digitos_iguais(numero1, numero2)
{
    int flag = 1;
    while(numero1>0 && numero2>0)
    {

      if ((numero1%10)!=(numero2%10))
    {
        return 0;
    }
    {
    numero1 =numero1/10;
    numero2 = numero2/10;
    }
    }
    return flag;

}

void digitos (int numero)
{
    while(numero>0)
    {
    printf ("%d\n", numero%10);
    numero = numero/10;
    }
}
int main()
{
    int a, b;

        printf("digite o valor de a: ");
        scanf("%d", &a);

        printf("digite o valor de b: ");
        scanf("%d", &b);

        if (ultimos_digitos_iguais(a,b))
        {
         printf("b corresponde aos ultimos digitos de a (sim)\n");
        }
        else
        {
        printf("b corresponde aos ultimos digitos de (nao)\n");
        }
        return 0;
}
