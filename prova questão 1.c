#include<stdio.h>

    int main(){
    float base, altura;
    float perimetro;
    float porta = 0.8;

    printf ("digite a altura em (metros) do quarto: ");
    scanf ("%f", &altura);
    printf ("digite o valor em (metros)da base do quarto: ");
    scanf ("%f", &base);

    perimetro = 2*(base + altura) - porta;

    printf("\n o perimetro eh :%.2f", perimetro);
    return 0;
    }
