#include <stdio.h>

int main(void) {
  float V[3],U[3];
  int i;
  float ProdutoE;

  printf("Digite 3 coordenadas (float) para v\n");
  for(i = 0; i<3; i++){
    scanf("%f", &V[i]);
  }


  printf("Digite 3 coordenadas (float) para u\n");
  for(i = 0; i<3; i++){
    scanf("%f", &U[i]);
  }
ProdutoE = (U[0]*V[0]) + (U[1]*V[1]) + (U[2]*V[2]);
  printf("Produto Escalar é %.2f\n", ProdutoE);
  return 0;
  }
