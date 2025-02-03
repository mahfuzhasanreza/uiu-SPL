#include <stdio.h>
void inc(int *ap, int dummy)
{
    for (int i = 0; i < dummy; i++)
    {
        *ap = *ap + 1;
        ap = ap + 2;
    }

    dummy = 100;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int dummy = 3;
    inc(&a[2], dummy);
    for (int i = 0; i < 8; i++)
        printf("%d ", a[i]);
    printf("\nDummy=%d\n", dummy);

    return 0;
}