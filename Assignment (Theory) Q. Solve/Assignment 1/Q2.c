#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        int count=n;
        int j;
        for(j=1; j<n-i; j++){
            printf(" ");
            --count;
        }
        for(; j<n; j++) printf("%d", --count);
        
        for(int k=1; k<i; k++) printf("%d", ++count);
        
        printf("\n");
    }

    return 0;
}