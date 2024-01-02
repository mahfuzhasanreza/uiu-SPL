#include <stdio.h>
#include <string.h>

int main(){
    char str1[50]="CSE-1111 SPE";
    char str2[50]="I am a UIUian";
    
    int i=strlen(str1)*0.5-2;
    
    for(int m=0; i+m<strlen(str1); m+=3){
        str1[i+m]=str2[m];        
    }

    strcat(str1, str2);
    
    if(strcmp(str2, str1)>0){
        strncat(str1, "CSE is awesome.", 6);
    }
    else{
        strncat(str2, "CSE is awesome.", 6);
    }

    return 0;

}

/*
Output:
     i | m |            str1                 |     str2
    ---|---|---------------------------------|--------------
     - | - |         CSE-1111 SPE            | I am a UIUian
     4 | - |         CSE-1111 SPE            | I am a UIUian
     4 | 0 |         CSE-I111 SPE            | I am a UIUian
     4 | 3 |         CSE-I11m SPE            | I am a UIUian
     4 | 6 |         CSE-I11m S E            | I am a UIUian
     4 | 9 |         CSE-I11m S E            | I am a UIUian
     4 | - |    CSE-I11m S EI am a UIUian    | I am a UIUian
     4 | - | CSE-I11m S EI am a UIUianCSE is | I am a UIUian
*/