//Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3) e ~v = (v1; v2; v3). O programa deve calcular o produto vetorial dos dois vetores da seguinte forma ~r = ~u ×~v = (u2v3 − u3v2; u3v1 − u1v3; u1v2 − u2v1). Ao final, o programa deve imprimir qual é o vetor resultante (~r) do produto vetorial dos dois vetores recebidos.
#include <stdio.h>

int main(void) {
int u[3],v[3],v3[3],i=0;

printf("Digite as coordenadas do 1° vetor:\n");
for(i=0;i<=2;i++){
scanf("%d", &u[i]);}
  
printf("Coordenadas do segundo vetor:\n");
for(i=0;i<=2;i++){
scanf("%d", &v[i]);}
// (u2v3 − u3v2; u3v1 − u1v3; u1v2 − u2v1)
v3[0] = u[1]*v[2] -u[2]*v[1];
v3[1] = u[2]*v[0]-u[0]*v[2];
v3[2] = u[0]*v[1]-u[1]*v[0];

for(i=0;i<=2;i++){
  printf("\t %d", v3[i]);
  printf("\n");
}

return 0;
}
