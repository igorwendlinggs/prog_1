//Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem pedindo para o usuário digitar um número inteiro entre 1 e 10. O programa deve repetir a solicitação enquanto não for atendido. Todo valor entre 1 e 10 deve ser somado coms os demais números digitados, quando o somatório de todos os números aceitos for igual ou maior a 21, o programa deve terminar imprimindo qual foi a soma total dos números aceitos.
#include <stdio.h>
int main(void){
  int x=0,xsoma=0;
while(xsoma<21){
  printf("Entre com um inteiro entre 1 e 10:\n");
  scanf("%d", &x);
xsoma=xsoma+x;
  }
  
  return 0;
}
