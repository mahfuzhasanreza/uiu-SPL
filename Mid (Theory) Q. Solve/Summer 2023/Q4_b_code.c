#include <stdio.h>

int main() {
    int num, sumEven = 0;
    scanf("%d", &num);


    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            if (i % 2 == 0) {
                sumEven += i;
            } else {
                printf("%d ", i);
            }
        }
    }

    printf("%d\n", sumEven);

    return 0;
}
