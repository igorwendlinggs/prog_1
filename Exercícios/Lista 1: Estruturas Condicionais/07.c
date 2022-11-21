//Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é múltiplo de 7 ou não.
#include <stdio.h>

int main(void){
int x;

printf("Digite um número inteiro\n");
scanf("%d", &x);

if(x%7==0){printf("número é múltiplo de 7\n");}
else{printf("número não é múltiplo de 7\n");}

return 0;}
