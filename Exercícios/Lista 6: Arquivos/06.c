/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e escreva no arquivo diferencas.dat a diferença entre cada dois números consecutivos
da sequência contida neste arquivo.*/
#include <stdio.h>

int main(void){
  int vint[20],i=0, r[19];
  FILE *arq;
  FILE *arq2;

  arq = fopen("seqinteiros.dat","r");
  for(i=0;i<20;i++){
  fscanf(arq,"%d",&vint[i]);
    }

arq2 = fopen("diferenca.dat","w");
for(i=0;i<19;i++){
   r[i] = (vint[i+1])-(vint[i]);
  fprintf(arq2,"%d ",r[i]);
  }
  
fclose(arq);
fclose(arq2);



  return 0;
}
