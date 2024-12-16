#include <stdio.h>

void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (!(a - b) && ++a)
        printf("Pattern\n");
    if ((a > 0 && b > 0) || (a < 0 && b < 0))
    {
        printf("Fizz\n");
        if (a > 0)
            printf("Positive\n");
        return 0;
        if (b < 0)
            printf("Negative\n");
    }
    else if (a > 0 && b < 0)
        printf("Buzz\n");
    else
        printf("FizzBuzz\n");
}

/*
Ans:
    (i)
        Pattern
        FizzBuzz

    (ii)
        Fizz
*/