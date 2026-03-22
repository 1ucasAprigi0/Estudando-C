#include <stdio.h>

int main (){
    //Obs.: Poderia ser feito com 3 VAr (Excluindo as VAR hrMin e totalMin)
    int hora, minutos, seg, hrMin, totalMin;

    printf("Valor Hora: ");
    scanf("%d%*c", &hora);
    printf("Valor Minutos: ");
    scanf("%d%*c", &minutos);
    //Metodo Com 3 VAR:
    //hora *= 60 | minutos += hora | seg = minutos*60
    hrMin = hora*60;
    totalMin = hrMin + minutos;
    seg = totalMin*60;

    printf("\nHora em minutos: %d", hrMin);
    printf("\nTotal minutos: %d", totalMin);
    printf("\nTotal minutos em segundos: %d", seg);

    return 0;
}