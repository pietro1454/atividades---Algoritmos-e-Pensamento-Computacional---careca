#include <stdio.h>

int main()
{
    float nota1, nota2, media, frequencia;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1+nota2)/2.0f;
    
    printf("Digite a frequência: ");
    scanf("%f", &frequencia);
    
    if(frequencia>=75){
        if(media>=6)
        {
        printf("\n Parabéns, você foi aprovado com média %.2f", media);
        printf("e também com frquência %.2f", frequencia);
        }
    
        else
        {
        printf("\n Não foi dessa vez... se lascou %.2f", media);
        }
    }
    else{
        printf("\n Você foi reprovado com frequência");
    }
    return 0;
}