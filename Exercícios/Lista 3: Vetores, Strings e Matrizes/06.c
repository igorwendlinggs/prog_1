//Crie um programa em linguagem C que receba duas palavras de cinco letras. O programa deve calcular quantas letras idênticas na mesma posição existem entre as duas palavras. EX: P = "corda"e Q = "carne", neste caso o programa deve retornar que existem 2 coincidências, sendo elas a letra ’c’ na primeira posição e a letra ’r’ na terceira posição. Ao final, o programa deve imprimir quantas coincidências foram encontradas entre as duas palavras recebidas. Considere letras maiúsculas e minúsculas como diferentes entre si
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
  char v[6],u[6];
  int i,x=0;

  printf("1° palavra de 5 letras:\n");
  scanf("%s", &v[i]);
  printf("2° palavra de 5 letras:\n");
  scanf("%s", &u[i]);

  for(i=0;i<5;i++){
    if(tolower(v[i]) == tolower(u[i])) {
      x++;
    }
  }
  printf("Letras idênticas: %d", x);
  return 0;
}
