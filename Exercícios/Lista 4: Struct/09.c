/*Crie um programa em linguagem C que receba 2 conjuntos de 3 valores inteiros, sendo hora valores de 0 a 23,
minuto valores de 0 a 59 e segundos valores de 0 a 59.Após receber os dois conjuntos de valores, o programa deve armazená-los em duas variáveis do tipo tRelogio. Após armazenado, o programa deverá calcular quanto tempo existe entre os dois valores registrados nas duas variáveis tRelogio. Ao final, o programa deve imprimir qual foi a o valor calculado*/
#include <stdio.h>


int dif(a,b){
  int r=0;
  if(a>b){
    r=a-b;
    return r;
  }else{
    r=b-a;
    return r;
    }
}

typedef struct tRelogio{
int hora ;
int minuto;
int segundo;
}tRel;
int main(void){
tRel a,b,c;


printf("\t PRIMEIRO HORÁRIO\n");
printf("Insira hora(0 a 23):\n");
scanf("%d",&a.hora);
while(a.hora<0||a.hora>23){
printf("Insira valor correto\n");
scanf("%d",&a.hora);
}

printf("Insira minuto(0 a 59):\n");
scanf("%d",&a.minuto);
while(a.minuto<0||a.hora>59){
printf("Insira valor correto\n");
scanf("%d",&a.minuto);
  }
  

printf("Insira segundo(0 a 59):\n");
scanf("%d",&a.segundo);
while(a.hora<0||a.hora>59){
printf("Insira valor correto\n");
scanf("%d",&a.segundo);
}


printf("\t SEGUNDO HORÁRIO\n");
printf("Insira hora(0 a 23):\n");
scanf("%d",&b.hora);
while(b.hora<0||b.hora>23){
printf("Insira valor correto\n");
scanf("%d",&b.hora);
}

printf("Insira minuto(0 a 59):\n");
scanf("%d",&b.minuto);
while(b.minuto<0||b.minuto>59){
printf("Insira valor correto\n");
scanf("%d",&b.minuto);
  }
  

printf("Insira segundo(0 a 59):\n");
scanf("%d",&b.segundo);
while(b.segundo<0||b.segundo>59){
printf("Insira valor correto\n");
scanf("%d",&b.segundo);
  }

//Diferença
c.hora= dif(a.hora,b.hora);
c.minuto= dif(a.minuto,b.minuto);
c.segundo= dif(a.segundo,b.segundo);


printf("Hora: %d\n", c.hora);
printf("Minuto: %d\n", c.minuto);
printf("Segundo: %d\n", c.segundo);









  

}
