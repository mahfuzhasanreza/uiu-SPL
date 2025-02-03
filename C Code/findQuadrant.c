#include<stdio.h>

// C Exercises: Find the quadrant in which the coordinate point lies
int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if(x>0 && y>0) printf("1st Quadrant");
    else if(x<0 && y>0) printf("2nd Quadrant");
    else if(x<0 && y<0) printf("3rd Quadrant");
    else if(x>0 && y<0) printf("4th Quadrant");
    else if(x==0 && y==0) printf("Origin");

    return 0;
}