#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int num=2*i;
        for(int j=1; j<n+i; j++){
            if(j<=n-i) printf("  ");
            else{
                printf("%d ", num);
                if(j<n) num+=2;
                else num-=2;
            }
        }
        printf("\n");
    }
    
    return 0;
}