//Crie um programa em linguagem C que receba duas matrizes de 3x3 posições de inteiros. O programa deve calcular a soma das duas matrizes. Ao final, o programa deve imprimir a matriz que é o resultado da soma das duas matrizes recebidas.
#include <stdio.h>
int main(void){
  int m[3][3],m2[3][3],m3[3][3],i,j,dsoma=0;
  
printf("Matriz 1 (3x3):\n");
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    scanf("%d", &m[i][j]);
    } 
  }

  printf("Matriz 2 (3x3):\n");
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    scanf("%d", &m2[i][j]);
    } 
  }

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    m3[i][j] += (m3[i][j] + m[i][j]+m2[i][j]);
    } 
  }

  printf("Matriz soma (3x3):\n");
for(i=0;i<3;i++){
  printf("\t");
  for(j=0;j<3;j++){
    printf("%4d", m3[i][j]);
    } printf("\n");
  }
  
  return 0;
}
