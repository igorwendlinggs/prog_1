//Crie um programa em linguagem C que receba três números inteiros, fora de ordem, e os imprima em ordem crescente.
#include <stdio.h>

int main(void) {
int A,B,C;

printf("Inserir 3 números inteiros\n");
scanf("%d%d%d", &A,&B,&C);

if(A>B&&A>C){
if(B>C)printf("%d,%d,%d",C,B,A);
else printf("%d,%d,%d",B,C,A);}

if(B>A&&B>C){
if(A>C)printf("%d,%d,%d",C,A,B);
else printf("%d,%d,%d",A,C,B);}

if(C>A&&C>B){
if(B>A)printf("%d,%d,%d",A,B,C);
else printf("%d,%d,%d",B,A,C);}
  
return 0;
}
