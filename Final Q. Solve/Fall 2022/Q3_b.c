#include<stdio.h>

int main(){
    char mainString[1000], substring[1000];
    printf("Main string: ");
    gets(mainString);
    fflush(stdin);
    printf("Substring: ");
    gets(substring);
    fflush(stdin);

    int i=0;
    int j=0;
    int match=0;
    while(mainString[i]!='\0'){
        if(mainString[i]==substring[j]){
            j++;
        } else{
            j=0;
        }
        if(substring[j]=='\0'){
            match=1;
            break;
        }
        i++;
    }

    if(match){
        printf("Substring matches");
    } else{
        printf("Substring does not match");
    }

    return 0;
}