#include <stdio.h>
int main()
{
    int a = 3, b = 4, c = -5, result;
    int mod;
    result = a * b % c + b;
    printf("result = %d\n", result);
    if (result >= 0 && result < 10)
    {
        printf("a = %d\n", a);
    }
    else if (result >= 5)
    {
        printf("b = %d\n", b);
    }
    else
        printf("a = %d\n", a);

    return 0;
}

/*
Output:
    result = 6
    a = 3
*/