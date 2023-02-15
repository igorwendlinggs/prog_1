#include <stdio.h>
#include <string.h>

int main(void){
  //variáveis e tamanho da msg. a chave k deve ter +1 espaço por motivos de string. m e c são declarados posteriormente, pois seu tamanho ainda será definido. a msg codificada deve ter o mesmo tamanho da msg inserida.
  char k[12]="EARTE2022/2";
  int x,i=0,a=0;

  while(a!=3){
    printf("Escolha: 1 - Codificar\n2 - Descodificar\n3 - SAIR\n");
    scanf("%d", &a);
  

 if(a==1){printf("\nDigite o tamanho da mensagem que será codificada:\n");
  scanf("%d",&x);

  char m[x];
  int c[x];

  printf("Digite a mensagem:\n");
  scanf("%s", &m[i]);

//Codificação: laço de repetição do tamanho da msg inserida, usando XOR.
for(i=0;i<x;i++)
  c[i] = (m[i] ^ k[i%x]);

  printf("Mensagem codificada!:\n");
for(i=0;i<x;i++)
  printf("\t\t%d", c[i]);}


if(a==2){
  char m[x];
  int c[x];

  
  printf("Insira o tamanho da mensagem codificada\n");
  scanf("%d", &x);


  
 printf("Mensagem a ser decodificada:\n");
for(i=0;i<x;i++){
  scanf("%d",&c[i]);
}
  
  for(i=0;i<x;i++){
    m[i] = (c[i] ^ k[i%x]);
  }


  
printf("Mensagem decodificada!:\n");
for(i=0;i<x;i++){
  printf("\t\t%c", m[i]);}
  }


    } 
return 0;
}
