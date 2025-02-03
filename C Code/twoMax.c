#include<stdio.h>

// C program to find maximum between two numbers
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        printf("Max = %d", num1);
    } else if(num2>num1){
        printf("Max = %d", num2);
    } else{
        printf("Both are equal");
    }

    return 0;
}