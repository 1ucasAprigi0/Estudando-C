#include <stdio.h>

int main(){
    int km;
    float litros, kmLitros, totalKm=0, totalLitros=0, media;

    printf("Litros consumidos (-1 finalizar): ");
    scanf("%f%*c", &litros);

    while(litros != -1){
        printf("Km percorridos: ");
        scanf("%d%*c", &km);

        kmLitros = km / litros;
        totalKm += km;
        totalLitros += litros;
        printf("A taxa de km/litros foi: %f\n", kmLitros);

        printf("\nLitros consumidos (-1 finalizar): ");
        scanf("%f%*c", &litros);
    }
    
    if (totalLitros > 0){
        media = totalKm/totalLitros;
        printf("A taxa total de Km/Litros foi: %f", media);
    }

    return 0;
}