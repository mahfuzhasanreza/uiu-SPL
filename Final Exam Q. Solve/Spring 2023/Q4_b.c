#include<stdio.h>
#include<math.h>

void function(int *x, float *a, float *b, float *c, float *d){
    float m, w;
    float e=*c; // Let e=*c // In Q. : w=c(1-e^(-dx)), but e is not mentioned anywhere
    w = *c * (1 - pow(e, (-*d * *x)));
    m = *a * pow(w, *b);
    printf("%f\n%f\n", w, m);
}

int main(){
    int x=35;
    float a=0.87, b=0.45, c=800, d=3.5;
    function(&x, &a, &b, &c, &d);
    return 0;
}