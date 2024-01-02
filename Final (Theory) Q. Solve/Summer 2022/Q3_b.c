#include<stdio.h>
#include<string.h>

int main(){

    char str1[50]={'\0'}, str2[50]="BEST";
    strcpy(str1, "HELLO FELLAS");

    int i=strlen(str1)*0.5;

    for(int k=0; str2[k]!='\0'; ++k)
        str1[i+k]=str2[k];

    strrev(str1);
    strcat(str1, str2);

    if(strcmp(str2, str1)>0){
        strcpy(str1, "CSE IS EASY");
    } else{
        strcpy(str2, "UIU IS THE BEST");
    }

    return 0;
}

/*
Manual Trace:
    i    |    k    |       str1       |       str2
---------|---------|------------------|-----------------
    -    |    -    |        \0        |       BEST
    -    |    -    |   HELLO FELLAS   |       BEST
    6    |    -    |   HELLO FELLAS   |       BEST
    6    |    0    |   HELLO BELLAS   |       BEST
    6    |    1    |   HELLO BELLAS   |       BEST
    6    |    2    |   HELLO BESLAS   |       BEST
    6    |    3    |   HELLO BESTAS   |       BEST
    6    |    4    |   HELLO BESTAS   |       BEST
    6    |    -    |   SATSEB OLLEH   |       BEST
    6    |    -    | SATSEB OLLEHBEST |       BEST
    6    |    -    | SATSEB OLLEHBEST |  UIU IS THE BEST
*/