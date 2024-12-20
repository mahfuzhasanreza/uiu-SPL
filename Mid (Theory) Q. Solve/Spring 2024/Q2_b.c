#include <stdio.h>
int main()
{
    int p = 1;
    int x = 490;
    for (int i = 1; i <= p;)
    {
        printf("%d %d %d\n", i, p, x);
        if (x % 29 == 0)
        {
            printf("Not a great number!");
            break;
        }
        else
        {
            x -= 13;
            p += x % 10;
            i += 3;
        }
    }
    return 0;
}

/*
Manually Trace:
--------|---------|--------
    i   |    p    |   x    
--------|---------|--------
    -   |    1    |  490    
--------|---------|--------
    1   |    8    |  477    
--------|---------|--------
    4   |    12   |  464 
--------|---------|--------
    7   |    12   |  464      
--------|---------|--------
*/