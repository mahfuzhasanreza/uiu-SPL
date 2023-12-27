#include <stdio.h>
#include <string.h>

void mystery(char *str, int d){
    for(int i=0; i<strlen(str); i++){
        char c=str[i];
        if(c>='a' && c<='z'){
            str[i]='a'+(c-'a'+d)%26;
        } else if(c>='A' && c<='Z'){
            str[i]='A'+(c-'A'+d)%26;
        }
    }
}

void main(){
    char msg[50];
    strcpy(msg, "Eb");
    strcat(msg, "iil");
    mystery(msg, 3);
    puts(msg);
    strcpy(msg, "# Ayh T");
    mystery(msg, 6);
    puts(msg);
}

/*
Output:
    Hello
    # Gen Z
*/