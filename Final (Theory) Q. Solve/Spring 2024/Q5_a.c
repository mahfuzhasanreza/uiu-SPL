#include<stdio.h>

int main(){
    int arr[5];
    int *arrPtr=arr;
    for(int i=0;i<5;i++){
        scanf("%d",arrPtr+i);
    }

    int m=*arrPtr;
    for(int i=1;i<5;i++){
        if(*(arrPtr+i)>m){
            m=*(arrPtr+i);
        }
    }

    printf("The largest element in the array is %d\n",m);

    return 0;
}