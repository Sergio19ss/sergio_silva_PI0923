#include <stdio.h>

int main() {
    int numero, i;
    int pares = 0, impares = 0;

    for (i = 0; i < 10; i++) {
        printf("Informe o %d� n�mero: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);

    return 0;
}


}
