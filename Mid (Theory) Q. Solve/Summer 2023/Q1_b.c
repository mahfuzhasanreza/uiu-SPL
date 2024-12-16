#include <stdio.h>

int main()
{
    float a = 22 / 4;
    int b = 2 % 7;
    int e = 4, c = 11 + ++e;
    int d = 2 == 3 ? 7 : 9;
    double result = 3 != 5;

    printf("%f\n%d\n%d\n%d\n%d\n%lf\n", a, b, c, d, e, result);

    return 0;
}

/*
Ans:
 a = 5.000000
 b = 2
 c = 16
 d = 9
 e = 5
 result = 1.000000
*/