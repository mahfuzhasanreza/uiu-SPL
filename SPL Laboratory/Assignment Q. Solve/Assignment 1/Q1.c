#include<stdio.h>

int main(){
    char mainString[1000], substring[1000];
    printf("Mainstring: ");
    scanf("%s", mainString);
    printf("Substring: ");
    scanf("%s", substring);

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
        printf("Found");
    } else{
        printf("Not Found");
    }

    return 0;
}