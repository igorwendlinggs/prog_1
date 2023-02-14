/*Crie um programa em linguagem C que leia o arquivo clientes.dat, contendo 5 linhas onde cada linha
contém 2 números reais. Considerando que o primeiro número de cada linha representa o peso de uma
pessoa e o segundo número representa a altura desta mesma pessoa, escreva no arquivo imc.dat o peso,
a altura e o IMC de cada uma das 5 pessoas. Para calcular o IMC utilize a fórmula a seguir:*/
#include <stdio.h>
#include <math.h>
int main(void){

int i,j;
float v[5][2], alt,r;
FILE *arqc;
FILE *imc;

arqc= fopen("clientes.dat","r");
imc= fopen("imc.dat","w");

for(i=0;i<5;i++){
  for(j=0;j<2;j++)
    fscanf(arqc,"%f",&v[i][j]);
}fclose(arqc);
  
/* Verificando se matriz foi lida corretamente
for(i=0;i<5;i++){
  printf("\n");
  for(j=0;j<2;j++)
    printf("%.2f ", v[i][j]);}*/

for (i = 0; i < 5; i++) {
alt=pow(v[i][1],2);
r= v[i][0]/alt;
fprintf(imc,"%f \n",r);     
}
  fclose(imc);
  }
