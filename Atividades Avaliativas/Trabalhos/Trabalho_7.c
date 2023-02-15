#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *piramide;
  FILE *seqint;
  int i, j;
  int v[20];

  seqint = fopen("seqinteiros.dat", "r");
  for (i = 0; i < 20; i++) {
    fscanf(seqint, " %d", &v[i]);
  }
  fclose(seqint);

  piramide = fopen("piramidif.dat", "w");
  for (j = 19; j > 0; j--) {

    for (i = 0; i < j; i++) {
      v[i] = (v[i] - v[i + 1]);
      printf("%d ", v[i]);
      fprintf(piramide, " %d", v[i]);
    }
    printf("\n");
    fprintf(piramide, "\n");
   }

   fclose(piramide);
 

  return 0;
}
