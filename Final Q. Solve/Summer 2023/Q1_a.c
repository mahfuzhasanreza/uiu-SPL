#include<stdio.h>

int IsEven(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}

long ComputeEvenSum(int arr[], int n){
    long sum=0;
    for(int i=0; i<n; i++){
        if(IsEven(arr[i])){
            sum+=arr[i];
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Even Sum: %ld", ComputeEvenSum(arr, n));

    return 0;
}