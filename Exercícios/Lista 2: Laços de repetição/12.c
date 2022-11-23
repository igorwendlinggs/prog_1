//Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo para o usuário digitar dois números inteiros. O programa deve imprimir todos os números inteiros do menor até o maior dos dois. O programa deve terminar após imprimir todos os números.
#include <stdio.h>
int main(void){
  int i,x,y;
printf("Digite 2 números inteiros:\n");
scanf("%d %d", &x,&y);
if(y>x){
printf("O 2° valor inserido é maior do que o 1° valor inserido:\n\n");
for(i=x;i<=y;i++)
  printf("%d\t", i);
  };
if(x>y){
printf("O 1° valor inserido é maior do que o 2° valor inserido:\n\n");
for(i=y;i<=x;i++)
  printf("%d\t\t", i);
  };
  
  return 0;
}
