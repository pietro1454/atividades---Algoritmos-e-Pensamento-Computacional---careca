
#include <stdio.h>

int main()
{
    int hora, minutos, soma;
    
    printf("Hora?: ");
    scanf("%d", &hora);
    
    printf("Minutos?: ");
    scanf("%d", &minutos);
    
    soma = (hora * 60) + minutos;
    
    printf("Já se pasaram %d minutos desde o ínicio do dia.\n", soma);

    return 0;
}
