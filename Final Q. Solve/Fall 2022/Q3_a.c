#include<stdio.h>

int main(){
    char str1[100], str2[100], str3[100];
    gets(str1); // str1 : Hello World
    scanf("%s", str2); // str2 : Programming
    strncpy(str3, str1, 8); // str1 : Hello World
    strncat(str2, str3, 4); // str2 : ProgrammingHell
    strcpy(str3, str2); // str2 : ProgrammingHell
    strncat(str3, str1, 3); // str1 : Hello World
    if(strcmp(str2, str3)>0) strncpy(str1, str3, 2);
    else strncpy(str2, str3, 2); // str2 : ProgrammingHell

    return 0;
}

/*
Manual Trace:
    str1 : Hello World
    str2 : Programming
    str2 : ProgrammingHell
*/