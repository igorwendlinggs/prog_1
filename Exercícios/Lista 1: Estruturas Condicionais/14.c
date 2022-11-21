//Considerando um jogo de cartas onde as cartas de Copas, Espadas, Paus e Ouros têm, respectivamente,os poderes 1, 2, 3 e 5. Considerando que a força de ataque de uma carta é a multiplicação de seu número pelo poder de seu naipe. Crie um programa em linguagem C que receba uma carta, representada pelo seu número e seu naipe, nesta ordem, e imprima a força de ataque da carta. Considere que os naipes são representados como números inteiros conforme ilustrado a seguir:1 Copas;2 Espadas;3 Paus e 4 Ouros.
#include <stdio.h>

int main(void){
int C,n,f;

printf("Informe o valor do naipe\n");
scanf("%d", &n);
printf("Escolha uma carta entre 1 Copas, 2 Espadas, 3 Paus e 4 Ouros\n");
scanf("%d",&C);

if(C==1){
f= n*1;
printf("Força de ataque: %d\n", f);}; //Copas

if(C==2){
f= n*2;
printf("Força de ataque: %d\n", f);}; //Espadas

if(C==3){
f= n*3;
printf("Força de ataque: %d\n", f);};
//Paus

if(C==4){
f= n*5;
printf("Força de ataque: %d\n", f);};
//Ouros

return 0;
}
