#include <stdio.h>

int main(){
    int km;
    float litros, kmLitros, totalKm=0, totalLitros=0, media;

    printf("Entre com os litros consumidos (-1 finalizar): ");
    scanf("%f%*c", &litros);

    while(litros != -1){
        printf("Entre com os km percorridos: ");
        scanf("%d%*c", &km);

        kmLitros = km / litros;
        totalKm += km;
        totalLitros += litros;
        printf("A taxa km/litro para esse tanque foi %f\n", kmLitros);

        printf("\nEntre com os litros consumidos (-1 finalizar): ");
        scanf("%f%*c", &litros);
    }
    
    if (totalLitros > 0){
        media = totalKm/totalLitros;
        printf("A taxa total de Km/Litros foi %f", media);
    }

    return 0;
}