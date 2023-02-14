/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20 números inteiros. Crie o arquivo piramidif.dat contendo 19 linhas. Sendo que a primeira linha deve conter 19 números inteiros, onde cada número representa a diferença entre cada dois números consecutivos da sequência lida originalmente. A segunda linha deve conter 18 números inteiros, onde cada número representa a diferença entre cada dois números consecutivos da primeira linha. A terceira linha deve conter 17 números inteiros, onde cada número representa a diferença entre cada dois números consecutivos da segunda linha. E assim por diante, cada linha deve ter um número a menos que a anterior e o valor de cada número deve representar a diferença entre cada dois números consecutivos da linha anterior. A última linha do arquivo terá apenas um número*/
#include <stdio.h>

int main(void){
int v[20],i=0,j;
FILE *arq1;
FILE *arq2;

arq1= fopen("seqinteiros.dat","r");
arq2= fopen("piramidif.dat","w");

for(i=0;i<20;i++){
fscanf(arq1," %d",&v[i]);}
fclose(arq1);

  for (j = 19; j > 0; j--){
for(i=0;i<j;i++){
v[i]=v[i]-v[i+1];
fprintf(arq2," %d ",v[i]);
}
fprintf(arq2,"\n");}
  
  

  
  
  
}
