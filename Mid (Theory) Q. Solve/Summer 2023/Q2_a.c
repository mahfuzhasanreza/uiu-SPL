#include <stdio.h>

int main()
{
    char rank;
    scanf("%c", &rank);
    int bonus = 0;

    if (rank == 'p' || rank == 'g' || rank == 's')
    {
        if (rank == 'p')
        {
            bonus += 20;
            bonus += 20;
            bonus += 20;
        }
        if (rank == 'g')
        {
            bonus += 20;
            bonus += 20;
        }
        if (rank == 's')
        {
            bonus += 20;
        }
    }
    else
    {
        bonus += 10;
    }

    printf("\n%d", bonus);
    return 0;
}
