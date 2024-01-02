#include <stdio.h>

void go(int num){
    printf("How are you?\n");
    if(num==0){
        return;
    }
    num/=10;
    go(num);
    printf("I am fine\n");
}

int main(void){
    int num=45633;
    go(num);
    
    return 0;
}

/*
Output:
    How are you?
    How are you?
    How are you?
    How are you?
    How are you?
    How are you?
    I am fine
    I am fine
    I am fine
    I am fine
    I am fine
*/