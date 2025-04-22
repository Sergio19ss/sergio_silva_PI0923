#include <stdio.h>

int main() {
    int notas[10];
    int i;
    int countAprovados = 0;

    float soma = 0;
    float media;

    printf("Informe as notas de 10 alunos (0 a 20):\n");
    for (i = 0; i < 10; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            countAprovados++;
        }
    }

    printf("\nMédia das notas: %.2f\n", media);
    printf("Alunos com nota maior ou igual à média: %d\n", countAprovados);

    return 0;
}
