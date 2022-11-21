//Crie um programa em linguagem C que receba três números inteiros e imprima na tela qual é o maior deles.
#include <stdio.h>

int main(void) {
int x1,x2,x3;

printf("Inserir 3 números inteiros e diferentes\n");
scanf("%d%d%d", &x1,&x2,&x3);

if(x1>x2&&x1>x3){printf("%d é o maior entre os três\n", x1);}
if(x2>x1&&x2>x3){printf("%d é o maior entre os três\n", x2);}
if(x3>x2&&x3>x1){printf("%d é o maior entre os três\n", x3);}
  
return 0;
}
