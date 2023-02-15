#include <stdio.h>

int main(void){
int i,j;
float v[3][3],u[3][3],r[3][3];

printf("Insira os valores da 1° matriz:\n ");
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("linha %d coluna %d: ",i,j);
    scanf("%f", &v[i][j]);
    } 
  }

printf("Insira os valores da 2° matriz;\n");
  for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("linha %d coluna %d: ",i,j);
    scanf("%f", &u[i][j]);
    } 
    }

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    r[i][j]=v[i][j]*u[i][j];

  }
}

printf("Resultado final:\n");
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("%2.f ", r[i][j]);
    } 
  printf("\n");
  }

  return 0;
}
