//Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar um número inteiro positivo. O programa deve imprimir a soma de todos os números inteiros de 1 até o número informado pelo usuário, quando terminar de imprimir os números o programa deve terminar.
#include <stdio.h>
int main(void){
  int i=0,x=0,soma=0;
printf("Digite 1 número inteiro  e positivo:\n");
scanf("%d", &x);

for(i=1;i<=x;i++){
printf("%d\t", i);
soma+=i;}
printf("\nSoma de 1 a %d = %d", x,soma);


  return 0;
}
