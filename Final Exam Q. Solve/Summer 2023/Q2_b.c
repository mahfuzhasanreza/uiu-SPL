#include<stdio.h>
#include<ctype.h>
#include<string.h>

int countOccurrences(char *firstStr, char *secondStr){
    int firstLen=strlen(firstStr);
    int secondLen=strlen(secondStr);
    int count=0;

    for(int i=0; i<=firstLen-secondLen; i++){
        if(strncmp(firstStr+i, secondStr, secondLen)==0){
            count++;
        }
    }

    return count;
}

int main(){
    char firstStr[1000];
    char secondStr[1000];

    printf("First string: ");
    gets(firstStr);
    fflush(stdin);
    printf("Second string: ");
    scanf("%s", secondStr);

    int i=0;
    while(firstStr[i]!='\0'){
        firstStr[i]=tolower(firstStr[i]);
        i++;
    }
    i=0;
    while(secondStr[i]!='\0'){
        secondStr[i]=tolower(secondStr[i]);
        i++;
    }

    printf("%d", countOccurrences(firstStr, secondStr));

    return 0;
}