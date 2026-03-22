#include <stdio.h>

int main (){
    int valor, maior=0, menor=0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    while( valor != 0){
        if (valor < 0){
            printf("Erro: Valor negativo\n");
        }else {
            if (menor == 0){
                menor = valor;
            }
            if (valor > maior){
                maior = valor;
            }
            if (valor < menor){
                menor = valor;
            }
        }
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &valor);
    }
    
    if (maior > 0 && menor > 0){
        printf("\nMaior valor: %d", maior);
        printf("\nMenor valor: %d", menor);
    }else {
        printf("Erro: Nenhum valor foi encontrado!!");
    }

    return 0;
}