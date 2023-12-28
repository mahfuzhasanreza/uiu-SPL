#include<stdio.h>

int ara[5], x=20;

void change(int p){
    --p;
    p--;
}
void update(int n){
    for(int i=n-1; i>=0; i--){
        ara[i]-=x;
        change(x);
    }
}

void main(){
    int n=5;
    for(int i=0; i<n; i++){
        ara[i]=(i+5)*2;
    }
    update(n);
    for(int i=0; i<n; i++){
        printf("%d, ", ara[i]);
    }
}

/*
Output:
    -10, -8, -6, -4, -2,
*/