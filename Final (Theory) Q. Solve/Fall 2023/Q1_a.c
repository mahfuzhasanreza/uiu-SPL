#include<stdio.h>

int updateBalance(float *balance, int id, int tranType, float amount){
    if(tranType==2){
        balance[id]+=amount;
        return 1;
    }
    if(tranType==1){
        if(amount>balance[id] && amount>0){
            printf("Not sufficient balance\n");
            return 0;
        }
        balance[id]-=amount;
        return 1;
    }
}

int main(){
    float balance[2];
    for(int i=0; i<2; i++){
        scanf("%f", &balance[i]);
    }

    int id, tranType;
    float amount;
    scanf("%d %d %f", &id, &tranType, &amount);

    int isSuccessful=updateBalance(balance, id, tranType, amount);
    if(isSuccessful){
        printf("Updated Balance: %f\n", balance[id]);
    }

    return 0;
}