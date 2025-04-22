#include <stdio.h>

/*Exercício 1:
 Desenvolva um programa que assuma uma entrada em Segundos e transforme em Horas, Minutos e Segundos.*/
int main(){
   int seg;

   printf("insira o tempo em segundos que deseja: ");
   scanf("%d", &seg);

   float min = seg / 60;
   float horas = min / 60;

   printf("%f\n", min);
   printf("%f\n", horas);

}
