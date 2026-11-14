#include <stdio.h>

int main()
{
    char tipoHospedagem;
    int quantidadeDiarias;
    float valorDiaria, valorTotal;

    printf("Qual o tipo de hospedagem (S-D-T)? ");
    scanf(" %c", &tipoHospedagem);

    printf("Qual a quantidade de diárias? ");
    scanf("%d", &quantidadeDiarias);

    switch(tipoHospedagem) {
        case 'S':
        case 's':
            valorDiaria = 300.0f;
            break;

        case 'D':
        case 'd':
            valorDiaria = 450.0f;
            break;

        case 'T':
        case 't':
            valorDiaria = 500.0f;
            break;

        default:
            printf("\nTipo inválido!!!\n");
            return 0; // Encerra para não calcular o valor com tipo inválido
    }

    valorTotal = valorDiaria * quantidadeDiarias;
    printf("\nValor total a pagar: R$ %.2f\n", valorTotal);

    return 0;
}