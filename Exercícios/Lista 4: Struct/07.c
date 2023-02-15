/*Crie um programa em linguagem C que receba 3 valores reais e os armazene na estrutura tVetorR3
criada anteriormente.*/
#include <stdio.h>

typedef struct tRelogio{
int hora ;
int  minuto;
int segundo;
}tRel;
int main(void){
tRel a;


printf("Insira hora(0 a 23):\n");
scanf("%d",&a.hora);
while(a.hora<0||a.hora>23){
printf("Insira valor correto\n");
scanf("%d",&a.hora);
}

printf("Insira minuto(0 a 59):\n");
scanf("%d",&a.minuto);
while(a.minuto<0||a.hora>59){
printf("Insira valor correto\n");
scanf("%d",&a.minuto);
  }
  

printf("Insira segundo(0 a 59):\n");
scanf("%d",&a.segundo);
while(a.hora<0||a.hora>59){
printf("Insira valor correto\n");
scanf("%d",&a.segundo);
}


  printf("Hora: %d\n", a.hora);
  printf("Minuto: %d\n", a.minuto);
  printf("Segundo: %d\n", a.segundo);








  

}
