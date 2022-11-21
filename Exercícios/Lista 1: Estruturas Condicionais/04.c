// Crie um programa em linguagem C que receba a altura e o peso de uma pessoa e imprima na tela o índice de massa corporal (IMC). IMC = (massa/altura²)
#include <stdio.h>

int main(void){
float h,h2,p,IMC;

printf("Inserir Peso em Kg:\n");
scanf("%f", &p);

printf("Inserir altura em metros:\n");
scanf("%f", &h);

h2=h*h;
IMC=(p/h2);

printf("IMC =%.2f\n", IMC);


return 0;}
