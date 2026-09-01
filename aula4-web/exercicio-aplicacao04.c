#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Qual é o peso da pessoa em kg? ");
    scanf("%f", &peso);
    
    printf("Qual é a altura da pessoa em metros? ");
    scanf("%f", &altura);
    
    imc = peso / (altura*altura);
    
    printf("O índice de massa corporal é %2.f kg/m^2.\n", imc);

    return 0;
}
