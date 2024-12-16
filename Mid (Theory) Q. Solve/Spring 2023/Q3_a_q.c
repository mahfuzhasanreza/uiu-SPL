#include <stdio.h>

int main()
{
    int weeks = 2, days_in_week = 7;
    for (int i = 1; i <= weeks; ++i)
    {
        printf("Week: %d\n", i);
        for (int j = 1; j <= days_in_week; ++j)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    printf(" Day: %d\n", j);
            }
            else
            {
                if (j % 2 != 0)
                    printf(" Day: %d\n", j);
            }
        }
    }
    return 0;
}