#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int arr[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        int temp=arr[i][0];
        arr[i][0]=arr[i][N-1];
        arr[i][N-1]=temp;
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

