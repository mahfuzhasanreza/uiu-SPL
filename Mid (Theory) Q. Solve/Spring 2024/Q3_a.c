#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n%2==0 || n<5)
        scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==(n+1)/2 || i==n)
                printf("* ");
            else if(i<(n+1)/2){
                if(j==n) printf("* ");
                else printf("  ");
            }
            else if(i>(n+1)/2 && j==1)
                printf("* "); 
        }
        printf("\n");
    }
    return 0;
}

