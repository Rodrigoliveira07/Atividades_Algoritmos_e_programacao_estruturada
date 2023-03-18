#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    float custo_fabrica, custo_consumidor;
    float percentual_distribuidor = 0.28; 
    float percentual_impostos = 0.45; 
    
    printf("Custo de fabrica do carro: R$");
    scanf("%f", &custo_fabrica);
    
    custo_consumidor = custo_fabrica * (1 + percentual_distribuidor + percentual_impostos); 
    
    printf("O custo final do carro ao consumidor é: R$%.2f\n", custo_consumidor);
    
    return 0;
}