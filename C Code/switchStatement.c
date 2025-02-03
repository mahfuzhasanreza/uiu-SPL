#include<stdio.h>

int main(){
    int n=2;

    switch(n){
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Others\n");
    }
    
    return 0;
}