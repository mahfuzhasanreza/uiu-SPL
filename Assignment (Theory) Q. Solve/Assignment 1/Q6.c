#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int count;
    if(n%2==0) count=n/2;
    else count=n/2+1; 

    for(int i=1; i<=n; i++){
        if(i==n/2+1){
            for(int j=1; j<=n; j++) printf("*");
            
            printf("\n");
            continue;
        }
        if(n%2==0 && i==n/2){
            for(int j=1; j<=n; j++) printf("*");
            
            printf("\n");
            continue;
        }
        if(n%2==0){
            for(int j=1; j<=n/2-1; j++) printf(" ");
            
            printf("*");
        } else{
            for(int j=1; j<=n/2; j++) printf(" ");
            printf("*");
        }
            
        printf("\n");
    }

    return 0;
}