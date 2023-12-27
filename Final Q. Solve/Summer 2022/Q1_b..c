#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n/2; j++){
            int tmp=mat[i][j];
            mat[i][j]=mat[i][n-j-1];
            mat[i][n-j-1]=tmp;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}