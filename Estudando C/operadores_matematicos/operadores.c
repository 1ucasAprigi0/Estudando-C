#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, soma, subtr, mult, divis;

    printf("Digite o primeiro valor: ");
    scanf("%d%*c", &A);

    printf("Digite o segundo valor: ");
    scanf("%d%*c", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A/B;
    
    printf("\nResultados: \n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtr);
    printf("Multiplicação: %d\n", mult);
    printf("Divisão: %d\n", divis);
    return 0;
}