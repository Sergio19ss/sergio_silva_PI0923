#include <stdio.h>

int main(){

    int num1;
    int num2;

    printf("Escolha um numero: ");
    scanf("%d", &num1);
    printf("Escolha outro numero: ");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("%d > %d", num1, num2);
    else
        printf("%d > %d", num2, num1);

}

