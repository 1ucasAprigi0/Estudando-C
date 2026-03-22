#include <stdio.h>
#include <stdlib.h>

int main(){
    int dado = 10;
    printf("Dado valor inicial: %d\n", dado);
    
    dado++;
    printf("Depois do incremento: %d\n", dado);

    dado--;
    printf("Depois do decremento: %d\n", dado);

    dado += 3;
    printf("Depois do incremento de + 3: %d\n", dado);

    dado -= 2;
    printf("Depois do decremento de - 2: %d\n", dado);

    dado *= 10;
    printf("Depois de multiplicar por 10: %d\n", dado);

    dado /= 10;
    printf("Depois de dividir por 10: %d\n", dado);

    return 0;
}