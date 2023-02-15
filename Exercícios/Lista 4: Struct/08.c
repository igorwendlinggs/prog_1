/*Crie um programa em linguagem C que receba 2 conjuntos de 3 valores inteiros, sendo hora valores de 0 a 23, minuto valores de 0 a 59 e segundos valores de 0 a 59. Se o usuário digitar os valores fora da faiza de valores aceita, o programa deve solicitar que o usuário digite os valores novamente, porém no intervalo correto. Após receber os dois conjuntos de valores, o programa deve armazená-los em duas variáveis do tipo tRelogio. Após armazenado, o programa deverá calcular se o primeiro valor digitado de tRelogio representa um horário anterior ao segundo valor digitado de tRelogio. Ao final, o programa deve imprimir qual dod dois valores de tRelogio representa um horário anterior*/
#include <stdio.h>

typedef struct tRelogio{
int hora ;
int minuto;
int segundo;
}tRel;
int main(void){
tRel a,b;

printf("\t PRIMEIRO HORÁRIO\n");
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


printf("\t SEGUNDO HORÁRIO\n");
printf("Insira hora(0 a 23):\n");
scanf("%d",&b.hora);
while(b.hora<0||b.hora>23){
printf("Insira valor correto\n");
scanf("%d",&b.hora);
}

printf("Insira minuto(0 a 59):\n");
scanf("%d",&b.minuto);
while(b.minuto<0||b.minuto>59){
printf("Insira valor correto\n");
scanf("%d",&b.minuto);
  }
  

printf("Insira segundo(0 a 59):\n");
scanf("%d",&b.segundo);
while(b.segundo<0||b.segundo>59){
printf("Insira valor correto\n");
scanf("%d",&b.segundo);
  }


if(a.hora<b.hora){
  printf("Hora anterior: %d\n", a.hora);}
else{printf("Hora anterior: %d\n", b.hora);}
  
if(a.minuto<b.minuto){
  printf("Minuto anterior: %d\n", a.minuto);}
else{printf("Minuto anterior: %d\n", b.minuto);}


if(a.minuto<b.minuto){
  printf("Segundo anterior: %d\n", a.segundo);}
  else{printf("Segundo anterior: %d\n", b.segundo);}








  

}
