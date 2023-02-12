/*Crie um programa em linguagem C que leia o arquivo palavra.dat, contendo uma única string, e imprima
na tela a palavra contida neste arquivo.*/
#include <stdio.h>

int main(void){
int i;
char v[12];
FILE *arq;

arq= fopen("palavra.dat","r");
for(i=0;i<12;i++)
fscanf(arq,"%s",v);
  /*fscanf(arq,"%c",&v[12];
  fclose(arq);*/
printf("%s",v);
  
return 0; }
