#include <stdio.h>

int main(){
    int conta;
    float saldoInicial, cobranca, creditos, limite, novoSaldo;

    printf("Entre com o numero da conta (-1 para finalizar): ");
    scanf("%d%*c", &conta);

    while(conta != -1){
        printf("Entre com o saldo inicial: ");
        scanf("%f%*c", &saldoInicial);
        printf("Entre com o total de cobranças: ");
        scanf("%f%*c", &cobranca);
        printf("Entre com o total de créditos: ");
        scanf("%f%*c", &creditos);
        printf("Limite de credito: ");
        scanf("%f%*c", &limite);

        novoSaldo = saldoInicial + cobranca - creditos;
        
        if(novoSaldo > limite){
            printf("Conta: %d\n", conta);
            printf("Limite de credito: %.2f\n", limite);
            printf("Saldo: %.2f\n", novoSaldo);
            printf("Limite de Credito Excedido.\n");
        }
        printf("\nEntre com o numero da conta (-1 para finalizar): ");
        scanf("%d%*c", &conta);

    }   
    return 0;
}