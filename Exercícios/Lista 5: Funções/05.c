/*Termine de escrever a função sacar. Com a função corretamente terminada, o programa em linguagem
C deverá receber um valor real que represente o saldo de uma conta bancária. A seguir o programa
deve receber um valor a ser sacado. De posse do valor, o programa deverá acionar a função sacar. A
função deve verificar se o valor a ser sacado é menor que o saldo disponível, caso seja, a função deve
diminuir o valor sacado do saldo e imprimir na tela uma mensagem informando que o saque foi feito,
caso contrário, a função deve informar que o saldo é insuiciente. Caso seja informado um valor de
saque menor ou igual a zero, o programa deve se encerrar. */

#include <stdio.h>
#include <stdlib.h>

void sacar(float *saldo, float saque){
if(saque<=*saldo){
  float r;
  r=*saldo-saque;
printf("\tSaldo restante:R$ %.2f\n",r);

}else{
  printf("Saldo insuficiente\n");
  }
  
}



int main(){

  float saldo, saque = 1.0;
  printf("Digite o saldo inicial (numero real): ");
  scanf("%f", &saldo);

  
printf("Digite o valor a ser sacado: ");

    scanf("%f", &saque);

  while(saque > 0.0){

    if(saque<=0){
      printf("\n\tPrograma encerrado devido a saque menor ou igual a 0");
    break;}
    sacar(&saldo, saque);
    
  

  }
  



  return 0;

  }
