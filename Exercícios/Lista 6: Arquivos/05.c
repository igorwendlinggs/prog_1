/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo
 * uma sequência de 20 números inteiros, e imprima na tela todos os números da
 * sequência contida neste arquivo.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *arq;
int v[20], posicoes[5] = {0, 3, 8, 12, 18}, i=0;

arq = fopen("seqinteiros.dat", "r");

for (i = 0; i < 20; i++) {
fscanf(arq, "%d", &v[i]);
    }fclose(arq);


//Imprimir na tela a sequência 
for (i = 0; i < 5; i++)
printf("%do: %d\n", posicoes[i] + 1, v[posicoes[i]]);
    

//Forma alternativa
 /*printf("1o: %d\n", v[0]);
    printf("4o: %d\n", v[3]);
    printf("9o: %d\n", v[8]);
    printf("13o: %d\n", v[12]);
    printf("19o: %d\n", v[18]);*/
    return 0;
  }
