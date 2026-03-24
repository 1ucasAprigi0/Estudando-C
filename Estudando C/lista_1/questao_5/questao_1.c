#include <stdio.h>

int main(){

    float venda, comissao;

    printf("Entre com a venda em reais (-1 para finalizar):");
    scanf("%f%*c", &venda);

    while(venda != -1){
        comissao = venda * 0.1 + 150.00;

        printf("Comissão: %.2f\n", comissao);

        printf("\nEntre com a venda em reais (-1 para finalizar):");
        scanf("%f%*c", &venda);        
    }
    return 0;
}