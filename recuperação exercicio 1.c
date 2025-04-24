#include<stdio.h>

int main(){
float altura, largura, area;
int litros_tinta;
printf("digite a altura em (metros) da parede:");
scanf("%f", &altura);
printf("digite a largura em (metros) da parede:");
scanf("%f", &largura);

area = (altura*largura);
litros_tinta = ceil(area/2);
printf("a area da parede e: %f\n", area);
printf("a quantidade de litros_tinta necessaria e: %d\n", litros_tinta);
return 0;
}

