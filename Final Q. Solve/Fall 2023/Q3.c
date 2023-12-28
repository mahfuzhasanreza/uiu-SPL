#include<stdio.h>

struct Customer{
    char name[20];
    int id, times;
    float money[20];
};

int main(){
    struct Customer customer[2];

    for(int i=0; i<2; i++){
        gets(customer[i].name);
        scanf("%d %d", &customer[i].id, &customer[i].times);
        for(int j=0; j<customer[i].times; j++){
            scanf("%f", &customer[i].money[j]);
        }
        fflush(stdin);
    }

    float avrg[2];
    for(int i=0; i<2; i++){
        float totalMoney=0;
        for(int j=0; j<customer[i].times; j++){
            totalMoney+=customer[i].money[j];
        }
        avrg[i]=totalMoney/customer[i].times;
    }

    int bestCustomerIndex=-1;
    for(int i=0; i<2; i++){
        if(customer[i].times>10){
            if(i==0) bestCustomerIndex=i;
            else{
                if(avrg[i]>avrg[bestCustomerIndex]){
                    bestCustomerIndex=i;
                }
            }
        }
    }
    
    if(bestCustomerIndex!=-1){
        printf("Best customer name: %s\n", customer[bestCustomerIndex].name);
    }

    return 0;
}