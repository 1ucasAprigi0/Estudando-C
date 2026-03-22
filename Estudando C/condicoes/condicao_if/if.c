#include <stdio.h>
#include <stdlib.h>

int main(){
    float m;

    printf("Insira a nota: ");
    scanf("%f%*c", &m);
    
    if (m >= 7.0){
        printf("Aprovado(a)!!\n");
    }
    
    return 0;
}