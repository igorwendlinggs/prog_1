//Crie um programa em linguagem C que receba dois números inteiros, calcule o produto destes números e imprima o resultado na tela.
#include <stdio.h>

int main(void){
int x,y,P;
printf("Inserir dois números inteiros:\n");
scanf("%d %d", &x, &y);
P= x*y;
printf("O produto entre os dois inteiros é igual a: %d\n", P);
return 0;}
