//Crie um programa em linguagem C que receba uma string de até 20 letras. O programa deve contar quantas vogais existem na string recebida. Ao final, o programa deve imprimir quantas vogais foram encontradas. Considere para a contagem tanto vogais minúsculas quanto maiúsculas.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
  char v[21];
  int i,x=0;
  printf("Insira uma palavra de até 20 letras:\n");
  scanf("%s", &v[i]);
  
  int y=strlen(v);
  for(i=0;i<y;i++){if(v[i]=='a'||'e'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
      x++;
    }
  }
  
    printf("Qntd de vogais: %d\n", x);

  
return 0;
}
