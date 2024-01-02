#include<stdio.h>
#include<math.h>

int is_perfect_square(int x){
    if(sqrt(x)*sqrt(x)==x) return 1;
    return 0;
}

int are_digits_non_decreasing(int x, int prev_digit){
    if(x==0) return 1;

    int currentDigit=x%10;
    if(currentDigit<=prev_digit) return are_digits_non_decreasing(x/10, currentDigit);
    else return 0;
}

int check_are_digits_non_decreasing(int x){
    if(are_digits_non_decreasing(x, 10)) return 1;
    return 0;
}

void find_perfect_square_sorcerers(int start, int end){
    printf("Perfect Square Sorcerers within the range [1, 400]:\n");
    for(int i=start; i<=end; i++){
        if(is_perfect_square(i) && check_are_digits_non_decreasing(i)) printf("%d\n", i);
    }
}

int main(){
    int start, end;

    printf("Enter the range [start, end]: ");
    scanf("%d %d", &start, &end);
    find_perfect_square_sorcerers(start, end);

    return 0;
}