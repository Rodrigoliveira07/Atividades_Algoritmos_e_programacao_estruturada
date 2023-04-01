#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 30) {
        printf("Voce eh muito jovem.\n");
    }

    return 0;
}