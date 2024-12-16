#include <stdio.h>

int main()
{
    char rank;
    scanf("%c", &rank);
    int bonus = 0;
    switch (rank)
    {
    case 'p':
        bonus += 20;
    case 'g':
        bonus += 20;
    case 's':
        bonus += 20;
        break;
    default:
        bonus += 10;
    }
    printf("\n % d", bonus);
    return 0;
}
