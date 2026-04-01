#include <stdio.h>

#define MES 3

int main() {
    int dev1[MES], dev2[MES], dev3[MES], dev4[MES], dev5[MES], total[5] = {0, 0, 0, 0, 0}, dev, i, m, bugs;
    float bonus[5] = {0, 0, 0, 0, 0}; 

    for(dev = 0; dev < 5; dev++) {
        for(m = 0; m < MES; m++) {
            printf("Entre com os bugs do mês %d do desenvolvedor %d: ", m+1, dev+1);

            scanf("%d", &bugs);
            
            if(dev == 0){
                dev1[m] = bugs;
                total[dev] += dev1[m]; 
            }
            else if(dev == 1){
                dev2[m] = bugs;
                total[dev] += dev2[m]; 
            }
            else if(dev == 2){
                dev3[m] = bugs;
                total[dev] += dev3[m]; 
            }
            else if(dev == 3){
                dev4[m] = bugs;
                total[dev] += dev4[m]; 
            }
            else if(dev == 4){
                dev5[m] = bugs;
                total[dev] += dev5[m]; 
            }        
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        bonus[i] = 50 * total[i];
        printf("Desenvolvedor %d: total de bugs = %d, bônus = R$%.2f\n", i+1, total[i], bonus[i]);
    }
    return 0;
}