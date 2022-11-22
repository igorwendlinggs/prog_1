 Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem pedindo para o usuário digitar um número real entre 0.0 e 1.0. O programa deve repetir a solicitação enquanto não for atendido, quando o usuário digitar o número no intervalo solicitado o programa deve terminar.
#include <stdio.h>

int main(void) {
  float x,y;
0.0<y<1.0;

  printf("Insira um valor entre 0.0 e 1.0:\n");
  scanf("%f", &x);
  do{
    printf("Valor incorreto. Insira um valor entre 0.0 e 1.0:\n");
    scanf("%f",&x);
  }while(x!=y);

    
  return 0;
}
