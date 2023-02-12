/*Crie um programa em linguagem C que leia o arquivo real.dat, contendo um único número real,
e imprima na tela o número contido neste arquivo.*/
#include <stdio.h>

int main(void){
int i=0;
float x;
FILE *arq;
  
arq = fopen("real.dat","r");
fscanf(arq,"%f", &x);
fclose(arq);

printf("%f", x);
 
  
  return 0;
  }

