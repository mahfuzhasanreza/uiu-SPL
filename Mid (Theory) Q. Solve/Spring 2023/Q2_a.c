#include <stdio.h>
// Rewrite the following code segment using “switch … case” without 
// changing the logical meaning.
int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    int k;
    k = (n > a) ? 1 : 0;
    switch(k){
        case 1:
            k = ((n - a) > 5) ? 1 : 0;
            switch(k){
                case 1:
                    printf("Difference is greater than 5 \n");
                    break;
                default:
                    printf("Difference is less than or equal to 5 \n");
            }
            break;
        default:
            printf("Please give a larger value of n \n");
    }
    return 0;
}