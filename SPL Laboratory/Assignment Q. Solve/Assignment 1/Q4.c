#include <stdio.h>

int is_prime(int x){
    if(x<2) return 0;

    for(int i=2; i*i<=x; i++) {
        if (x%i==0) return 0;
    }
    return 1;
}

int reverse_number(int x, int reversed){
    if(x==0) return reversed;
    return reverse_number(x/10, reversed*10+x%10);
}

int is_palindromic_prime(int x){
    if(is_prime(x) && (x==reverse_number(x, 0))) return 1;
    return 0;
}

void find_superhero_palindromic_primes(int start, int end) {
    printf("Palindromic prime numbers within the range %d to %d are:\n", start, end);
    for (int i=start; i<=end; i++) {
        if(is_palindromic_prime(i)) printf("%d\n", i);
    }
}

int main(){
    int lower_limit, upper_limit;

    printf("Enter lower limit: ");
    scanf("%d", &lower_limit);
    printf("Enter upper limit: ");
    scanf("%d", &upper_limit);

    find_superhero_palindromic_primes(lower_limit, upper_limit);

    return 0;
}
