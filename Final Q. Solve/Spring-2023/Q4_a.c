#include<stdio.h>

void function(int num){
    if (num>0){
        function(num/8);
        printf("%d", num%8);
    }
}

int main(){
    function(95);
    return 0;
}

/*
Output:
    137
*/