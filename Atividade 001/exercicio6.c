#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    float salario_atual, percentual_reajuste, novo_salario;
    
    printf("Salario atual do funcionario: ");
    scanf("%f", &salario_atual);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);
    
    novo_salario = salario_atual * (1 + percentual_reajuste/100); 
    
    printf("O novo salario do funcionario é: R$%.2f\n", novo_salario);
    
    return 0;
}