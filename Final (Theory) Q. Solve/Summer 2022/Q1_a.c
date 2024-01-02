#include <stdio.h>

void main(){
    int i, j, data[5][5]={0};

    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++)
            scanf("%d", &data[i][j]);
    }

    for(i=0; i<5; i++){
        for(j=i; j<5; j++)
            printf("%d_", data[i][j]);
        printf("\n");
    }
}

/*
Output:
    0_1_2_3_4_
    0_5_6_7_
    0_8_9_
    0_10_
    0_
*/