#include<stdio.h>
#include<math.h>

int Main(){
    float n_, m = 5;
    scanf("%d", &n_);
    float p = ((int)n_%(int)m)/sqrt(6);
    printf("%d", p);
    return 0;
}