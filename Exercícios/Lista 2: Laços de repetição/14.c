//Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar uma letra minúsculas. O programa deve repetir a solicitação enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve imprimir todas as letras do alfabeto iniciando na letra ’a’ e indo até a letra informada, após imprimir todas as letras o programa deve terminar.
#include <stdio.h>
int main(void){
  char x=0,i=0;
while(x<'a'||x>'z'){
printf("Digite uma letra minúscula :\n");
scanf(" %c", &x);}
if(x>='a'&&x<='z'){
  printf("De a até %c:\n",x);
  for(i='a';i<=x;i++){
    printf("%c\t", i);
  }
}

  
  return 0;
}
