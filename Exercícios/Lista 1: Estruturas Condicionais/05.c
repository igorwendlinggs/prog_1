//Crie um programa em linguagem C que receba um tempo em anos e imprima quantos dias são equiva-lentes ao tempo informado. Ex. 3 anos equivalem a 1095 dias.
#include <stdio.h>

int main(void){
float a,d;

printf("Insira uma quantidade de anos:\n"); scanf("%f", &a);

d=365*a;

printf("%.1f anos equivalem a: %.1f dias.\n", a, d);

return 0;}
