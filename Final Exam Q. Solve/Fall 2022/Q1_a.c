#include <stdio.h>
#define SIZE 4

void main(){
    int i, j, mat[SIZE][SIZE]={0};
    for(i=0; i<SIZE; i++){
        for(j=i+1; j<SIZE; j++)
            scanf("%d", &mat[i][j]);
    }
    for(i=0; i<SIZE-1; i++){
        for(j=i+1; j<SIZE; j++)
            scanf("%d", &mat[j][i]);
    }
    for(i=0; i<SIZE; i++){
        for(j=0; j<i; j++)
            mat[i][j]+=mat[j][i];
    }
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}

/*

Output:
    0	21	24	27	
    60	0	30	33	
    66	78	0	36	
    72	84	90	0

*/