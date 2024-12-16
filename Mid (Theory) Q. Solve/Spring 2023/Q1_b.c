#include <stdio.h>
int main()
{
    int a = (float)15 / 4;
    float b = a++ * a--;
    int c = (a > b || a == 1 + 2) * 2;
    float d = a / c;

    printf("%d, %f, %d,%f",a,b,c,d);

    return 0;
}
/*
Q: Compute the values of the variables a, b, c and d.
Ans:
    a = 3
    b = 12.000000
    c = 2
    d = 1.000000
*/