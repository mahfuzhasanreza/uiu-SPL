#include<stdio.h>

int main(){
    char str[1000];
    gets(str);
    
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>'A' && str[i]<='Z' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            if(str[i]=='Z'){
                str[i]='A';
            } else{
                str[i]++;
            }
        } else if(str[i]>'a' && str[i]<='z' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            if(str[i]=='z'){
                str[i]='a';
            } else{
                str[i]++;
            }
        }
        i++;
    }
    printf("%s", str);

    return 0;
}