
#include <stdio.h>

int main()
{
    float potencia, horas_dia, consumo;
    
    printf("potencia do equipamento (w)? ");
    scanf("%f", &potencia);
    
    printf("Horas de uso por dia? ");
    scanf("%f", &horas_dia);
    
    consumo = (potencia * horas_dia * 30) / 1000;
    
    printf("Consumo mensal: %.2f kwh/n", consumo);

    return 0;
}
