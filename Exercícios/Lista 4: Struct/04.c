/*Crie um programa em linguagem C que receba 3 valores inteiros e os armazene na estrutura tRelogio
criada anteriormente*/
#include <stdio.h>
typedef struct tRelogio{
int hora;
int minuto;
int segundo;
}tRel;
int main(void){
tRel r;

printf("Insira as horas:\n");
scanf("%d",&r.hora);

printf("Insira os minutos:\n");
scanf("%d",&r.minuto);

printf("Insira of segundos:\n");
scanf("%d",&r.segundo);


printf("Hora: %d\n", r.hora);
  printf("Minuto: %d\n", r.minuto);
  printf("Segundo: %d\n", r.segundo);


}
