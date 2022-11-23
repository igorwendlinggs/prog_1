//Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo para o usuário digitar um número inteiro. O programa deve imprimir todos os números inteiros de 1 até o número informado pelo usuário contando de 3 em 3, quando terminar de imprimir os números o programa deve terminar.
#include <stdio.h>
int main(void){
  int i,x;
printf("Digite 1 número inteiro:\n");
scanf("%d", &x);
for(i=1;i<=x;i+=3){
  printf("%d\t", i);
  }
  return 0;
}
