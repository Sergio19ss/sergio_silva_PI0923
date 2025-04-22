#include <stdio.h>

int main() {
    int numero, i;
    int pares = 0, impares = 0;

    for (i = 0; i < 10; i++) {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}


}
