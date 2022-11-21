// Crie um programa em linguagem C que receba dois números inteiros e imprima na tela qual é o maior deles.
#include <stdio.h>

int main(void){
int x,y;

printf("Digite dois números inteiros\n");
scanf("%d %d", &x,&y);

if(x>y){printf("%d maior do que %d\n", x, y);};
if(y>x){printf("%d maior do que %d\n",y, x);};
if(x==y){printf("%d igual a %d\n", x,y);};

return 0;}
