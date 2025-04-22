#include <stdio.h>

int main() {
    float saldo;
    float cheque;

    printf("Saldo inicial da conta: ");
    scanf("%f", &saldo);

    printf("Valor do cheque: ");
    scanf("%f", &cheque);


    if (saldo >= cheque) {
        saldo -= cheque;
        printf("Cheque descontado com sucesso!\n");
        printf("Novo saldo: %.2f EUR\n", saldo);
    } else {
        printf("Saldo insuficiente.\n");
    }
}
