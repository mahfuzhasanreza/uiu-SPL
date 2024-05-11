#include<stdio.h>

int x = 78, y = 0, z = 156;

int first_function(int p, int q) {
    int x = ++p ;
    return x + z;
}
void second_function(int w, int y) {
    y *= x;
    y -= w;
    printf("%d %d %d\n", x, y, z);
    x = first_function(y, z);
    printf("%d %d %d\n", x, y, z);
}

void main() {
    int x = 90;
    y = first_function(x, z);
    printf("%d %d %d\n", x, y, z);
    second_function(y, z);
    printf("%d %d %d\n", x, y, z);
}

/*
Output:
    90 246 156
    78 11922 156
    12078 11922 156
    90 246 156
*/
