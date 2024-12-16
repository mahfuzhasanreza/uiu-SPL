#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    if (n > a)
    {
        if (n - a > 5)
        {
            printf("Difference is greater than 5 \n");
        }
        else
        {
            printf("Difference is less than or equal to 5 \n");
        }
    }
    else
    {
        printf("Please give a larger value of n \n");
    }
    return 0;
}