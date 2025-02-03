#include<stdio.h>

// C program to check whether a character is Uppercase or Lowercase
int main(){
    char ch;
    scanf("%c", &ch);

    if(ch>='a' && ch<='z') printf("Lowercase");
    else if(ch>='A' && ch<='Z') printf("Uppercase");
    
    return 0;
}