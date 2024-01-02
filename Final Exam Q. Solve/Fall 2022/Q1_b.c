#include<stdio.h>

int main(){
    int mat[4][4]={{1,2,3,4}, {5,6,0,6}, {0,2,1,3}, {1,4,6,2}};

    long int sum=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j==0 || j==3 || i==j){
                sum+=mat[i][j];
            }
        }
    }
    printf("Sum: %ld", sum);

    return 0;
}