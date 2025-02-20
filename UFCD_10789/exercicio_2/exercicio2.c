#include <stdio.h>

int main(){

    int num1 = 2;
    int num2 = 1;
    int num3 = 6;

    printf("Insere o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Insere o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Insere o terceiro n�mero: ");
    scanf("%d", &num3);

    int maior = num1;
    int menor = num1;
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;
    printf("O maior n�mero �: %d\n", maior);
    printf("O menor n�mero �: %d\n", menor);
    return 0;
}
