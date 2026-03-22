#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int idade = 0; 
    float peso = 0.0;
    char nome[100];

    printf("Digite seu Nome: ");
    scanf("%s", &nome);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("\nSeu nome é: %s", nome);
    printf("\nIdade: %d anos\n", idade);
    printf("Peso: %.2f Kg\n", peso);
    return 0;
}