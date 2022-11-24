
//Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3) e ~v = (v1; v2; v3). O programa deve calcular a soma dos vetores da seguinte forma ~r = ~u + ~v =(u1 + v1; u2 + v2; u3 + v3). Ao final, o programa deve imprimir qual é o vetor resultante (~r) da soma dos dois vetores recebidos.
#include <stdio.h>
int main(void){
int vetorV[3],vetorU[3],vetorSoma[3],i=0;

printf("Insira as coordenadas do 1° vetor:\n");
for(i=0;i<=2;i++){
scanf("%d", &vetorV[i]);}

printf("Insira as coordenadas do 2° vetor:\n");
for(i=0;i<=2;i++){
scanf("%d", &vetorU[i]);}

for(i=0;i<=2;i++){
  vetorSoma[i]=vetorV[i]+vetorU[i];}
printf("Vetor resultante da soma:\n");
for(i=0;i<=2;i++){
printf("vetorSoma[%d] = %d\n",i,vetorSoma[i]);}



  return 0;
}
