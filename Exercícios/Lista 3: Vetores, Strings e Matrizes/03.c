//Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3) e ~v = (v1; v2; v3). O programa deve calcular o módulo de cada um dos dois vetores da seguinte forma. Ao final, o programa deve imprimir quais são os valores do módulo de cada um dos dois vetores recebidos |~u| e |~v|. Inclua a biblioteca math.h e utilize as funções pow e sqrt para calcular respectivamente o ao quadrado e a raiz quadrada
#include <stdio.h>
#include <math.h>
int main(void){
int v[3],u[3],i=0;
float v1=0,u1=0;

printf("Insira as coordenadas do 1° vetor:\n");
for(i=0;i<=2;i++){
scanf("%d", &v[i]);}

printf("Insira as coordenadas do 2° vetor:\n");
for(i=0;i<=2;i++){
scanf("%d", &u[i]);}

v1=(pow(v[0],2)+pow(v[1],2)+pow(v[2],2));
u1=(pow(u[0],2)+pow(u[1],2)+pow(u[2],2));

printf("Módulo do 1°vetor: %.2f\nMódulo do 2° vetor: %.2f\n",sqrt(v1),sqrt(u1));


  
  
  return 0;

  }
