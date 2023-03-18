#include <stdio.h>
#include <locale.h>

#define PI 3.14159 

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    float raio, area;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    area = PI * raio * raio; 
    
    printf("A área do circulo é: %.2f\n", area);
    
    return 0;
}