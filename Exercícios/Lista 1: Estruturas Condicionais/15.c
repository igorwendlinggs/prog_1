//Crie um programa em linguagem C que mostre ao usuário um menu com 4 opções listadas a seguir.1Soma;2 Multiplicação;3Menor e 4 Maior.Após o usuário escolher qual das opções deseja, o programa deverá receber números inteiros e proceder conforme a opção selecionada anteriormente. Se na opção 1, informar a soma dos dois números. Se na opção 2, informar a multiplicação dos dois números. Se na opção 3, informar o menor dos dois números, Se na opção 4, informar o maior dos dois números.
#include <stdio.h>

int main(void){
int a,b,x,S,M;

printf("Escolha entre as opções:\n1.Soma\n2.Multiplicação\n3.Menor\n4.Maior\n");
scanf("%d",&x);

if(x==1){
printf("Inserir dois inteiros:\n");;
scanf("%d%d",&a,&b);
S=a+b;
printf("Resultado da soma: %d\n", S);};

if(x==2){
printf("Inserir dois inteiros:\n");
scanf("%d%d",&a,&b);
M=a*b;
printf("Produto: %d\n",M);};

if(x==3){
printf("Inserir dois inteiros:\n");
scanf("%d%d",&a,&b);
if(a>b)printf("Menor valor:%d",b);
else printf("Menor valor:%d",a);};

if(x==4){
  printf("Inserir dois inteiros:\n");
scanf("%d%d",&a,&b);
if(a>b)printf("Maior valor:%d",a);
else printf("Maior valor:%d",b);};

  
return 0;

   
}
