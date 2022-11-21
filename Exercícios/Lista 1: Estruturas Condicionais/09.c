//Considerando que uma lasanha de presunto e queijo possui 7,3%, 11,7% e 6,0% da sua massa, respectivamente, em gordura, carboidratos e proteínas. Considerando também que gordura, carboidrato e proteína possuem respectivamente 9, 4 e 4 calorias por grama. Crie um programa em linguagem C que receba o peso de lasanha e calcule a quatidade total de calorias da porção informada.
#include <stdio.h>

int main(void){
float P,m,g,carb,pro,cal;

printf("Inserir peso da lasanha em kg\n");
scanf("%f", &P);

g=(7.3/100)*P;
carb=(11.7/100)*P;
pro=(6/100)*P;

cal=((g*9)+(carb*4)+(pro*4))*1000;
printf("Total de calorias é de %.2f cal.\n", cal);

return 0;}
