#include <stdio.h>

int main(){

    int mat[4][7], semana[4]= {0}, dia[7] = {0};
    int maiorSemana = 0, maiorDia = 0, maisAtiva = 0, diaMovi = 0, i, j;
    char diasSemana[7][15] = {"Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};

    for(i=0; i<4; i++){
        for(j=0; j<7; j++){
            printf("Entre com treinos Filial %d, Dia %d: ", i+1, j+1);
            scanf("%d%*c", &mat[i][j]);

            semana[i] += mat[i][j];
            dia[j] += mat[i][j];

            if(dia[j] > maiorDia){
                maiorDia = dia[j];
            }
        }
        if(semana[i] > maiorSemana){
            maiorSemana = semana[i];
        }
        printf("\n");
    }
    printf("\n=== RELATÓRIO SEMANAL ===\n");
    for(i=0; i<4; i++){
        printf("Filial %d: Total = %d treinos\n", i+1, semana[i]);
    }
    printf("\n");
    for(i=0; i<7; i++){
        printf("%s: %d treinos\n", diasSemana[i], dia[i]);
    }
    printf("\n");
    for(i=0; i<4; i++){
        if(semana[i] == maiorSemana){
            printf("Filial mais ativa: %d (%d treinos)\n", i+1, semana[i]);
        }
    }
    for(i=0; i<7; i++){
            if(dia[i] == maiorDia){
                printf("Dia mais movimentado: %s (%d treinos)\n", diasSemana[i], dia[i]);
            }
    }
    return 0;
}