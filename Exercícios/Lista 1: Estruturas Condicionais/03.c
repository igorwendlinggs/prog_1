// Crie um programa em linguagem C que receba uma temperatura em graus fahrenheit (F) e a converta para graus celsius (C). C = 5 × (F-32)/9
#include <stdio.h>

int main(void){
float C,F;

printf("Insira temperatura em °F\n");
scanf("%f", &F);
C=5*(F-32)/9;
printf("%.2f°F em Celsius = %.2f°C\n",F,C);

return 0;
}
