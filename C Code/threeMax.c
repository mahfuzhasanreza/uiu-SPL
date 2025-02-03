#include<stdio.h>

// C program to find maximum between three numbers
int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1>=num2 && num1>=num3) printf("Max = %d", num1);
    else if(num2>=num1 && num2>=num3) printf("Max = %d", num2);
    else printf("Max = %d", num3);

    return 0;
}