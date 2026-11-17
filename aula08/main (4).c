#include <stdio.h>

int main()
{
    int idade[5] = {20, 24, 18, 19, 31};
    
    for(int i=0; i<5; i++){
    printf("O valor da posição %d: %d \n", i+1, idade[i]);
    scanf("%d", &idade[i]);
    
    }
    
    for(int i=0; i<5; i++){
    printf("O valor da posição %d: %d \n", i+1, idade[i]);
    }
    
    
    return 0;
}