#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    float custo, frete, despesas, venda, lucro;
    
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);
    
    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas);
    
    venda = custo + frete + despesas;
    
    printf("Digite o valor de venda: ");
    scanf("%f", &venda);
    
    lucro = (venda - custo - frete - despesas) / custo * 100;
    
    printf("O Lucro da mercadoria é: %.2f%%\n", lucro);
    
    return 0;
}
