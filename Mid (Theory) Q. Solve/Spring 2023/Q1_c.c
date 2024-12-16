#include <stdio.h>
int main()
{
    int b;
    scanf("%d", &b);
    if (b >= 10)
    {
        printf("SPL\n");
        b--;
    }
    if (b < 10)
    {
        printf("Spring\n");
        b--;
    }
    else if ((b >= 3) || (b < 10))
        printf("2023\n");
    else if (b >= 3 && b < 10)
        printf("Happy Coding!");
    else
        printf("Huh!");
    
    return 0;
}
/*
Q: Find the output of the following program for (i) b=10, and (ii) b=2
Ans:
i) Output:
    SPL
    Spring
ii) Output:
    Spring
*/