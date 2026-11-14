/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float media, frequencia;
    
    printf("Qual é a média final do aluno?");
    scanf("%f", &media);
    
    printf("Qual o percentual de frequência? ");
    scanf("%f", &frequencia);
    
    if(frequencia < 75){
        printf("Reprovado por falta. \n");
    }
    else {
        if (media>=6){
        printf("Você foi aprovado :) \n");
    }
    
    else{
        printf("Reprovado por média :( \n");
    }
}
    return 0;
}
