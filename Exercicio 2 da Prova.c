#include<stdio.h>
#include<math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    if(a == 0)
    {

        return 0;
    }
    delta=-b*b-4*a*c;

    if (delta < 0)
    {

        return 0;
    }

    else if (delta == 0)
    {

        *x1= -b/ (2 * a);
        *x2= *x1;
        return 1;
    }

    else
    {

        *x1 = (-b+sqrt(delta))/2*a;
        *x2 = (-b-sqrt(delta))/2*a;
        return 2;
    }

}
int main()
{
    float a,b,c,r1,r2;
    int quantidade;

    printf("Digite os valores de a,b,c: ");
    scanf("%f %f %f", &a, &b, &c);

    quantidade=calcula_raizes (a,b,c,&r1,&r2);

    if (quantidade == 0)
    {
        printf("nenuhuma raiz real encontrada\n");
    }
    else if( quantidade == 1)
    {
        printf("apenas uma raiz encontrada, a raiz eh: %fn", r1);
    }
    else
    {
        printf("duas raizes encontrdas, as raizes sao %f e %f\n", r1, r2);

    }
    return 0;
}


