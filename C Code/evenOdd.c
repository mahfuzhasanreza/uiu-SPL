#include<stdio.h>

// C program check whether a number is even or odd
int main(){
    int num;
    scanf("%d", &num);
    
    if(num%2!=0) printf("Odd");
    else printf("Even");

    return 0;
}