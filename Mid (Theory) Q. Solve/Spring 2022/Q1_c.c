#include<stdio.h>

int main(){
    int a = 10.0/3*10;
    float b = (int)23.0%11;
    int c = (10 > 9 && 21 <= 19)*5;
    float d = 7/2;
    
    printf("a: %d, b: %f, c: %d, d: %f\n", a, b, c, d);
    
    return 0;
}

/*
Output:
    a: 33, b: 1.000000, c: 0, d: 3.000000
*/