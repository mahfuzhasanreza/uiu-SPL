#include<stdio.h>

void correctingStr(char *str){
    int readIndex=1, writeIndex=1;
    while(str[readIndex]!='\0'){
        if(str[readIndex]!=str[readIndex-1] || str[readIndex]!='a' && str[readIndex]!='e' && str[readIndex]!='i' && str[readIndex]!='o' && str[readIndex]!='u' && str[readIndex]!='A' && str[readIndex]!='E' && str[readIndex]!='I' && str[readIndex]!='O' && str[readIndex]!='U'){
            str[writeIndex++]=str[readIndex];
        }
        readIndex++;
    }
    str[writeIndex]='\0';
}

int main(){
    char str[1000];
    gets(str);

    correctingStr(str);
    printf("%s\n", str);

    return 0;
}