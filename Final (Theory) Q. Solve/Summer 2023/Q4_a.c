#include<stdio.h>

void change(int *x, int *y, int z){
    *x=*x+10;
    *y=*y+3;
    z=z+5;
    return;
}

void main(){
    int a=10, b=21, c=40;
    printf("%d %d %d\n", a, b, c);
    change(&a, &b, c);
    printf("%d %d %d\n", a, b, c);
}

/*
Output:
    10 21 40
    20 24 40
*/