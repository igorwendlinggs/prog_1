//Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem pedindo para o usuário digitar um número real entre 0.0 e 1.0. O programa deve repetir a solicitação enquanto não for atendido, quando o usuário digitar o número no intervalo solicitado o programa deve terminar.
#include <stdio.h>
int main(void){
  float x=0;
while(x>=1||x<=0){
  printf("Entre com um n. real entre 0 e 1");
  scanf("%f", &x);
  }


  return 0;
}
