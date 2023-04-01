#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota5, media;

    printf("Digite as cinco notas do aluno:\n");
    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("A media das notas do aluno eh: %.2f\n", media);

    return 0;
}