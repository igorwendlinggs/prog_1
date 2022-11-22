//Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem pedindo para o usuário digitar uma vogal em letra maiúscula. O programa deve repetir a solicitação enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve terminar.
#include <stdio.h>

int main(void) {
  char x=0;
  
  do{
printf("Insira uma vogal maiúscula\n");
scanf(" %c", &x);
  
  }while((x!='A')&&(x!='E')&&(x!='I') &&(x!='O')&& (x!='U'));

  if((x!='A')||(x!='E')||(x!='I')||(x!='O')||(x!='U')){
    printf("\n\tFim.\n");
  }
  
  return 0;
}
