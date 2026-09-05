#include <stdio.h>
#include <math.h>

int main()
{
    float largura, comprimento, valor_caixa, area_total, custo_total;
    int caixas;
    
    printf("Qual é a largura da área (em metros)? ");
    scanf("%f", &largura);
    
    printf("Qual é o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);
    
    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valor_caixa);
    
    area_total = largura * comprimento;
    caixas = ceil(area_total / 2.5);
    custo_total = caixas * valor_caixa;
    
    printf("Área total a ser revestida: %.2f m^\n", area_total);
    printf("Quantidade de caixas necessárias: %d\n", caixas);
    printf("Custo total da compra: R$ %2.f\n", custo_total);
    
    return 0;
}
