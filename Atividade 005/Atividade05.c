#include <stdio.h>
#include <string.h>

int main() {
    char nome_completo[100];
    printf("Digite o nome completo: ");
    fgets(nome_completo, 100, stdin);
    nome_completo[strcspn(nome_completo, "\n")] = '\0'; 
    
    char sobrenome[20], iniciais[20];
    sscanf(nome_completo, "%[^ ] %[^\n]", sobrenome, iniciais); 
    
    int tam = strlen(iniciais);
    for (int i = 0; i < tam; i++) {
        if (iniciais[i] >= 'a' && iniciais[i] <= 'z') {
            iniciais[i] = iniciais[i] - 'a' + 'A';
        }
        if (i == 0) {
            printf("%c. ", iniciais[i]);
        } else if (iniciais[i-1] == ' ') {
            printf("%c. ", iniciais[i]);
        }
    }
    
    tam = strlen(sobrenome);
    for (int i = 0; i < tam; i++) {
        if (sobrenome[i] >= 'a' && sobrenome[i] <= 'z') {
            sobrenome[i] = sobrenome[i] - 'a' + 'A';
        }
    }
    printf("%s\n", sobrenome);
    
    return 0;
}