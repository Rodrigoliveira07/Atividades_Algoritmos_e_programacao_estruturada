#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    float base, altura, area;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    
    area = base * altura; 
    
    printf("A area do retangulo e: %.2f\n", area);
    
    return 0;
}