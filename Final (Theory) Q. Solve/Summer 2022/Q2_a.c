#include<stdio.h>

int func(int n){
    printf("%d\n", n);
    if(n%7==0) return 2;
    else if(n%2==0) func(n+2);
    else func(n+1);
    printf("%d\n",n);
}

void main(){
    printf("%d", func(3));
}

/*
Output:
    3
    4
    6
    8
    10
    12
    14
    12
    10
    8
    6
    4
    3
    2
*/