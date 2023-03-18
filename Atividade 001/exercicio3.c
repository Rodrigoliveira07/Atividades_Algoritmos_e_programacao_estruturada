#include <stdio.h>
#include <locale.h>

#define CONSUMO_TINTA 0.3 
#define QTD_TINTA_LATA 2 

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    float largura, altura, area, qtd_tinta, qtd_latas;
    
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);
    
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);
    
    area = largura * altura; 
    
    qtd_tinta = area * CONSUMO_TINTA; 
    
    qtd_latas = qtd_tinta / QTD_TINTA_LATA; 
    
    printf("Serão necessárias %.0f latas de tinta para pintar a parede.\n", ceil(qtd_latas));
    
    return 0;