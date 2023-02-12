/*Crie um programa em linguagem C que leia o arquivo inteiro.dat, contendo um único número inteiro,
e imprima na tela o número contido neste arquivo.*/
#include <stdio.h>

int main(void){
int i;
char v[3];
FILE *arq;

arq= fopen("inteiro.dat","r");
for(i=0;i<3;i++)
fscanf(arq,"%s",v);
  /*fscanf(arq,"%d",&u[3]);
  fclose(arq);*/

printf("%s",v);
  
return 0; }
