#include<stdio.h>
#include<math.h>

int main(){
    int n_, m = 5;
    scanf("%d", &n_);
    float p = (n_%m)/sqrt(6);
    printf("%f", p);
    return 0;
}