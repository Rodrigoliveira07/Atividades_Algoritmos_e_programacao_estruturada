#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    int anos, meses, dias, idade_dias;
    
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);
    
    idade_dias = anos * 365 + meses * 30 + dias; 
    
    printf("A idade em dias é: %d\n", idade_dias);
    
    return 0;
}