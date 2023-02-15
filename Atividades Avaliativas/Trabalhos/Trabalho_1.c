#include <stdio.h>
int main(void){
int saque=0,n200,n100,n50,n20,n10,n5,n2,resto=0;

  
while(saque<2){
  printf("\tEscolha um valor a ser sacado do caixa:\n");
  scanf("%d", &saque);}

  /*Verifica se o valor restante é igual a 1 ou 3, pois esses valores não podem ser sacados com notas. Nesse caso, o programa reduz a quantidade de notas de maior valor e acrescenta o valor dessa nota ao valor restante.*/
n200=saque/200;
resto=saque%200;
if(n200 > 0 && (resto == 1 || resto == 3))
{
 n200 = n200 - 1;
 resto = resto + 200;
}

n100= resto/100;
resto=resto%100;
if(n100 > 0 && (resto == 1 || resto == 3))
{
 n100 = n100 - 1;
 resto = resto + 100;
  }


n50=resto/50;
resto=resto%50;
if(n50 > 0 && (resto == 1 || resto == 3))
{
 n50 = n50 - 1;
 resto = resto + 50;
  }

n20=resto/20;
resto=resto%20;
if(n20 > 0 && (resto == 1 || resto == 3))
{
 n20= n20 - 1;
 resto = resto + 20;
}

n10=resto/10;
resto=resto%10;
if(n10 > 0 && (resto == 1 || resto == 3))
{
 n10 = n10 - 1;
 resto = resto + 10;
}
  
n5=resto/5;
resto=resto%5;
if(n5 > 0 && (resto == 1 || resto == 3))
{
 n5 = n5 - 1;
 resto = resto + 5;
}

n2=resto/2;
resto=resto%2;
if(n2> 0 && (resto == 1 || resto == 3))
{
 n2 = n2 - 1;
 resto = resto + 2;
}
if(resto>0){
  printf("Saque Inválido, tente outro valor\n");
}
  
printf("Notas de 200: %d \n", n200);
    printf("Notas de 100: %d \n", n100);
    printf("Notas de 50: %d \n", n50);
    printf("Notas de 20: %d \n", n20);
    printf("Notas de 10: %d \n", n10);
    printf("Notas de 5: %d \n", n5);
    printf("Notas de 2: %d \n", n2);
    
return 0;
}
