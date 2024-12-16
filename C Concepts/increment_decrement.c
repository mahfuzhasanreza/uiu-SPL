#include<stdio.h>

int main(){
    int x = 5;
    int y = x++ + ++x;
    printf("x=%d, y=%d\n", x, y);

    int a = 3, b = 4;
    printf("%d\n", a++ + --b);

    int i = 0;
    while (i++ < 5) {
    }
    printf("i=%d\n", i);

    int z = 5;
    z = z++ + ++z + --z;
    printf("z=%d\n", z);

    return 0;
}