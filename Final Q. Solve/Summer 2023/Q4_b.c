#include<stdio.h>

void function(int num){
    if(num>0){
        function(--num);
        printf("%d ", num);
        function(--num);
    }
}

int main(){
    function(4);

    return 0;
}

/*
Output:
    0 1 2 0 3 0 1
*/