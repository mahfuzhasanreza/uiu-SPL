#include <stdio.h>
#include <string.h>

struct demons{
    char name[60];
    int power;
};

int onlyAlphabets(char *input) {
    for(int i=0; input[i]!='\0'; i++){
        if(!((input[i]>='a' && input[i]<='z') || (input[i]>='A' && input[i]<='Z'))) return 0;
    }
    return 1;
}

int Multiple_of_5(int x){
    if(x%5==0) return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    struct demons demonList[n];
    for(int i=0; i<n; i++){
        scanf("%s %d", demonList[i].name, &demonList[i].power);
    }

    int count=0;
    for(int i=0; i<n; i++){
        if(onlyAlphabets(demonList[i].name) && Multiple_of_5(demonList[i].power)) count++;
    }
    printf("%d\n", count);

    return 0;
}
