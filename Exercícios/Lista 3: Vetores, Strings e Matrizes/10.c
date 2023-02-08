//Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 9 nú-meros inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x3 posições.Ao final, o programa deve imprimir na tela a soma dos elementos da diagonal principal A ordem de preenchimento das posições da matriz deve ser a sequinte:
#include <stdio.h>
int main(void){
  int m[3][3],i,j,dsoma=0;
  printf("Insira 9 números inteiros:\n");

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("linha %d coluna %d: ",i,j);
    scanf("%d", &m[i][j]);
    } 
  }
  
printf("Matriz gerada:\n");
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf("%4d",m[i][j]);} printf("\n");}
  
  for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    if(i==j) dsoma = dsoma + m[i][j];
      
    }
    printf("Soma das diagonais:\n%d\n", dsoma);
  
  
  return 0;
}
