/*Crie um programa em linguagem C que receba 2 valores reais e os armazene na estrutura tLatLong
criada anteriormente.*/
#include <stdio.h>

typedef struct tLatlong{
float lat;
float longi;
}latlong;
int main(void){
latlong x;

printf("Insira a latitude:\n");
scanf("%f",&x.lat);

printf("Insira a longitude:\n");
scanf("%f",&x.longi);



printf("Latitude: %f\n", x.lat);
  printf("Minuto: %f\n", x.longi);
  

}
