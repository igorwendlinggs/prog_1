//Crie um programa em linguagem C, utilizando o comando do .. while, que imprima um menu com 5 opções, sendo a opção 5 para sair, e pedindo para o usuário digitar uma das opções. Quando uma opção for selecionada o programa deve imprimir na tela o nome da opção escolhida. O programa deve repetir a solicitação enquanto não for escolhida a opção 5 para sair.

#include <stdio.h>

int main(void){
  char x;
  do{
  printf("Escolha uma opção\n1.Opção A\n2.Opção B\n3.Opção C\n4.Opção D\n5.Sair E\n");
  scanf(" %c", &x);
if(x=='A') printf("Você escolheu a opção A\n");
if(x=='B') printf("Você escolheu a opção B\n");
if(x=='C') printf("Você escolheu a opção C\n");
if(x=='D') printf("Você escolheu a opção D\n");

    }while(x!='E');
  

  return 0;
}


