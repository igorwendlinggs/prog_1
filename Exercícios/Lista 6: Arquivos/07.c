/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e escreva no arquivo razaofib.dat a divisão real de um número da sequência pelo
número anterior da sequência contida neste arquivo.*/
#include <stdio.h>

int main(void){
  int i=0;
  float r[19],vint[20];
  FILE *arq;
  FILE *arq2;

  arq = fopen("seqinteiros.dat","r");
  for(i=0;i<20;i++){
  fscanf(arq,"%f",&vint[i]);
    }

arq2 = fopen("razaofib.dat","w");
for(i=0;i<19;i++){
   r[i] = (vint[i+1])/(vint[i]);
  fprintf(arq2,"%.4f\t",r[i]);
  }
  
fclose(arq);
fclose(arq2);



  return 0;
}
