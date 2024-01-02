#include<stdio.h>

int sumOfOddElements(int *arr, int size){
    // Write my code here
    int sum=0;
    for(int i=0; i<size; i++){
        if(*(arr+i)%2 != 0){
            sum += *(arr+i);
        }
    }
    return sum;
}

int main(){
    int numbers[]={10, 21, 35, 42, 57, 68, 73};
    int n=sizeof(numbers)/sizeof(numbers[0]);
    int sum=sumOfOddElements(numbers, n);
    printf("Sum of odd elements: %d\n", sum);
    return 0;
}