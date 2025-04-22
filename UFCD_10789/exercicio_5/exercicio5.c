#include <stdio.h>

int main(){

int num1;
int num2;
int num3;

    printf("Escolha um numero: ");
    scanf("%d", &num1);
    printf("Escolha outro numero: ");
    scanf("%d", &num2);
    printf("Escolha outro numero: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\nOrdem crescente: %d %d %d", num1, num2, num3);

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 < num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("\nOrdem decrescente: %d %d %d", num1, num2, num3);

}
