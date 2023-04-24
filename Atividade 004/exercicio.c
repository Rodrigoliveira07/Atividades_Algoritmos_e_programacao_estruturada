#include <stdio.h>

float le_valida_media() {
    float media;
    do {
        printf("Informe a media (de 0 a 10): ");
        scanf("%f", &media);
    } while (media < 0 || media > 10);
    return media;
}

float calcular_media(int n, float soma) {
    return soma / n;
}

void cabecalho() {
    printf("------------------\n");
    printf("Relatorio da turma\n");
    printf("------------------\n");
}

void rodape(int aprovados, int reprovados, float menor_media) {
    printf("------------------\n");
    printf("Reprovados: %d\n", reprovados);
    printf("Aprovados: %d\n", aprovados);
    printf("Menor media: %.1f\n", menor_media);
    printf("------------------\n");
    printf("    BSB - 2023\n");
}

int main() {
    int n = 0;
    float soma = 0, media, menor_media = 10;
    int aprovados = 0, reprovados = 0;
    cabecalho();
    while (n < 25) {
        media = le_valida_media();
        soma += media;
        n++;
        if (media < menor_media) {
            menor_media = media;
        }
        if (media >= 6.9) {
            aprovados++;
        } else {
            reprovados++;
        }
        printf("------------------\n");
        printf("Media da turma: %.1f\n", calcular_media(n, soma));
        printf("------------------\n");
    }
    rodape(aprovados, reprovados, menor_media);
    return 0;
}