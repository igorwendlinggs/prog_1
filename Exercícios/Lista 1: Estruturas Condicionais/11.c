// Crie um programa em linguagem C que receba dez números reais e retorne qual é a média e o desvio padrão entre eles.
#include <stdio.h>

int main(void) {
float x1,x2,x3,x4,Y,Var,Desvio;

printf("Inserir 4 números reais\n");
scanf("%f%f%f%f",&x1,&x2,&x3,&x4);

Y=(x1+x2+x3+x4)/4;
Desvio=((x1-4)*(x1-4)+(x2-4)*(x2-4)+(x3-4)*(x3-4)+(x4-4)*(x4-4));

Var=Desvio/4;

printf("Média é de: %.2f\n", Y);
printf("O desvio entre eles é: %.2f\n",Desvio);

  
return 0;
}
