#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int k = 15;
    for (int i = 1; i < 6; i += 2)
    {
        arr[i] = ++k - 2;
        k++;
    }
    int c = 0;
    for (int i = 6; i < 10; i++)
    {
        for (int j = 10; j >= i; j--)
        {
            arr[j] = ++c;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = ++k;
        }
    }

    // printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d," ,arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
}

// Solution in the README file