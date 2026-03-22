#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saide dados!!"

int main(){
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade: ");
    scanf("%d%*c", &idade);

    printf("Digite a altura: ");
    scanf("%f%*c", &altura);

    printf("Digite o nome: ");
    fgets(nome, 50, stdin);
    
    printf("\nDados informados:\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2fm\n", altura);
    printf("Nome: %s\n", nome);

    return 0;
}