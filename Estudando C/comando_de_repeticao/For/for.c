#include <stdio.h>

int main(){

    for(int i = 1;i <= 20; i++){
        printf("%d ", i);
    }

    printf("\nNumeros Pares de 1 a 20: ");

    for(int i = 1;i <= 20; i++){
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf ("\nExecução encerrada!!");
    return 0;
}