#include<stdio.h>

void displayVowelCount(char *str){
    int countA=0, countE=0, countI=0, countO=0, countU=0;

    int j=0;
    while(str[j]!='\0'){
        if(str[j]=='a' || str[j]=='A')
            countA++;
        else if(str[j]=='e' || str[j]=='E')
            countE++;
        else if(str[j]=='i' || str[j]=='I')
            countI++;
        else if(str[j]=='o' || str[j]=='O')
            countO++;
        else if(str[j]=='u' || str[j]=='U')
            countU++;
        j++;
    }
    printf("A/a: %d\nE/e: %d\nI/i: %d\nO/o: %d\nU/u: %d\n", countA, countE, countI, countO, countU);
}

int main(){
    char str[1000];

    gets(str);
    displayVowelCount(str);

    return 0;
}