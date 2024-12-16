#include <stdio.h>
int main(){
    int i=0, count=0;
    int n=12345;

    for(; n!=0; ){
        printf("%d", n%10);
        count++;
        while(i<count){
            printf("%d", n/=10);
            i++;
        }
        printf("\n");
    }
    return 0;
}

