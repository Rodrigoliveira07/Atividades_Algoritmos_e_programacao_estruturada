#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    int num_carros_vendidos;
    float valor_vendas, salario_fixo, valor_por_carro, comissao, salario_final;
    float percentual_comissao = 0.05; 
    
    printf("Numero de carros vendidos: ");
    scanf("%d", &num_carros_vendidos);
    
    printf("Valor total de vendas: R$");
    scanf("%f", &valor_vendas);
    
    printf("Salario fixo do vendedor: R$");
    scanf("%f", &salario_fixo);
    
    printf("Valor recebido por carro vendido: R$");
    scanf("%f", &valor_por_carro);
    
    comissao = num_carros_vendidos * valor_por_carro; 
    
    salario_final = salario_fixo + comissao + (percentual_comissao * valor_vendas); 
    
    printf("O salario final do vendedor é: R$%.2f\n", salario_final);
    
    return 0;
}