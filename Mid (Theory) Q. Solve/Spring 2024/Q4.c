#include <stdio.h>
int main()
{
    int hi = 0, hlw = 10;
    int arr[4] = {10, 20, 30, 40};
    for (int i = 4; i <= hlw; i++)
    {
        arr[hi] = arr[hi + 1] - 5;
        hlw -= 2;
    }

    return 0;
}
/*
Manually Trace:
--------|---------|--------|--------|--------|--------|--------
    i   |    hi   |  hlw   | arr[0] | arr[1] | arr[2] | arr[3]
--------|---------|--------|--------|--------|--------|--------
    -   |    0    |   10   |   10   |   20   |   30   |   40
--------|---------|--------|--------|--------|--------|--------
    4   |    0    |    8   |   15   |   20   |   30   |   40
--------|---------|--------|--------|--------|--------|--------
    5   |    0    |    6   |   15   |   20   |   30   |   40
--------|---------|--------|--------|--------|--------|--------
    6   |    0    |    4   |   15   |   20   |   30   |   40
--------|---------|--------|--------|--------|--------|--------
    7   |    0    |    4   |   15   |   20   |   30   |   40
--------|---------|--------|--------|--------|--------|--------
*/