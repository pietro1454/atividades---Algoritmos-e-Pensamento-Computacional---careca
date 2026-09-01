
#include <stdio.h>

int main()
{
    int manha, tarde, total;
    
    printf("Quantidade recebida pela manhã: ");
    scanf("%d", &manha);
    
    printf("Quantidade recebida à tarde: ");
    scanf("%d", &tarde);
    
    total = manha + tarde;
    
    printf("Total de produtos recebido no dia: %d\n", total);
    
    return 0;
}