//Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem pedindo para o usuário digitar uma vogal em letra maiúscula. O programa deve repetir a solicitação enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve terminar.
#include <stdio.h>
int main(void){
  char x=0;
while(x!='E'){
  printf("Entre com uma vogal maiúscula:\n");
  scanf(" %c", &x);
  }
  return 0;
}
