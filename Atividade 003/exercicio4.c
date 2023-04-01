#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Voce nao nasceu ainda.\n");
    }
    if (idade >= 0) {
        if (idade <= 15) {
            printf("Voce nao vota.\n");
        }
        if (idade >= 16) {
            if (idade <= 17) {
                printf("Voto opcional.\n");
            }
            if (idade >= 18) {
                if (idade <= 65) {
                    printf("Voto obrigatorio.\n");
                }
                if (idade == 41) {
                    printf("Voce ganhou um premio, mas nao precisa votar.\n");
                }
                if (idade > 65) {
                    if (idade != 88) {
                        printf("Voto opcional.\n");
                    } else {
                        printf("Voce ganhou um premio, mas nao precisa votar.\n");
                    }
                }
            }
        }
    }

    return 0;
}