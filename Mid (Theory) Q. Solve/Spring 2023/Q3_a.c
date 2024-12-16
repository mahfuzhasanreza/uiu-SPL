#include <stdio.h>
// Replace the nested “for” loop in the following code using nested “do …
// while” loop without changing the logical meaning of the program:
int main()
{
    int weeks = 2, days_in_week = 7;
    int i = 1;
    if (i <= weeks)
    {
        do
        {
            printf("Week: %d\n", i);
            int j = 1;
            if (j <= days_in_week)
            {
                do
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
                    ++j;
                } while (j <= days_in_week);
            }
            ++i;
        } while (i <= weeks);
    }

    return 0;
}