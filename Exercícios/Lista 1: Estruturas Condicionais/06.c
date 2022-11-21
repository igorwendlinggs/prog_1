//Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é par ou ímpar.
#include <stdio.h>

int main(void){
int x;

printf("Digite um número inteiro\n");
scanf("%d", &x);

if(x%2==0){printf("número par\n");}
else{printf("número ímpar\n");}

return 0;}
