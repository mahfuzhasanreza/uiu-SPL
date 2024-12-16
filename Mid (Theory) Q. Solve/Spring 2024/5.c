#include <stdio.h>
int main(){
    int N, K;
    scanf("%d", &N);
    
    int arr[N];
    for(int i=0; i<N; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &K);
    for(int i=0; i<N; i++){
        if(i%2==0) arr[i]+=K;
        else arr[i]-=K;
    }

    for(int i=0; i<N; i++)
        printf("%d ", arr[i]);

    return 0;
}