#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    float n1, n2, n3, media;

    printf("Primeira nota: ");
    scanf("%f", &n1);

    printf("Segunda nota: ");
    scanf("%f", &n2);

    printf("Terceira nota: ");
    scanf("%f", &n3);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);

    printf("A media final do aluno é: %.2f", media);

    return 0;
}