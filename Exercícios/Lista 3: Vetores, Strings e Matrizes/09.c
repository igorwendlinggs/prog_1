//Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 15 números inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x5 posi-ções. Ao final, o programa deve imprimir na tela a matriz com 3 linhas e 5 colunas contendo os valoresdigitados pelo usuário. A ordem de preenchimento das posições da matriz deve ser a sequinte:
#include <stdio.h>
int main(void){
  int m[3][5],i,j;
  printf("Insira 15 números inteiros:\n");

for(i=0;i<3;i++){
  for(j=0;j<5;j++){
    printf("linha %d coluna %d: ",i,j);
    scanf("%d", &m[i][j]);
    } 
  }

for(i=0;i<3;i++){
  for(j=0;j<5;j++){
    printf("%4d",m[i][j]);
  } printf("\n");
}
  
  
  return 0;
}
