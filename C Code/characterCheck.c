#include<stdio.h>

// C program to check whether a character is alphabet,
// digit or special character. If alphabet then check vowel
// or consonant
int main(){
    char ch;
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("Alphabet\n");
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            printf("Vowel");
        } else{
            printf("Consonant");
        }
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }

    return 0;
}