#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int count=0;
    for(int i=1; i<=n; i++){
        int j;
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(; j<=n; j++){
            count++;
            if(count==n+1) count=1;
            printf("%d", count);
        }
        printf("\n");
    }

    return 0;
}