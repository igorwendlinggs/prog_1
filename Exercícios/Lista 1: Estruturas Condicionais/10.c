//Crie um programa em linguagem C que receba dez números reais e retorne qual é a soma de todos os números
#include <stdio.h>

int main(void) {
float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,X;

printf("Inserir 10 números reais\n");
scanf("%f%f%f%f%f%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10);
X=x1+x2+x3+x4+x5+x6+x7+x8+x9+x10;
printf("Soma total é: %.2f\n", X);

return 0;
}
