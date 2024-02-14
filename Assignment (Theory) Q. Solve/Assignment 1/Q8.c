#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int m=0;
    int k=1;
    for(int i=1; i<=n/2+1; i++){
        m++;
        for(int j=1; j<=n/2+1-m; j++) printf(" ");
        
        for(int j=1; j<=k; j++){
            if(n%2==0 && j==k) break;
            printf("*");
        }
        k+=2;
        if(n%2==0 && i==1) printf("*");
        printf("\n");        
    }

    return 0;
}