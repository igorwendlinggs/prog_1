//Crie um programa em linguagem C, utilizando o comando while, que imprima um menu com 5 opções, sendo a opção 5 para sair, e pedindo para o usuário digitar uma das opções. Quando uma opção for selecionada o programa deve imprimir na tela o nome da opção escolhida. O programa deve repetir a solicitação enquanto não for escolhida a opção 5 para sair.

#include <stdio.h>
int main(void){
  char x=0;
while(x!='E'){
  printf("Escolha uma das opções:\n1. A\n2. B\n3. C\n4. D\n5. E\n");
  scanf(" %c", &x);
  }

  
  return 0;
}
