#include<stdio.h>
/*
Write a C program to input marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer, calculate percentage and grade
according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
*/
int main(){
    float phy, chem, bio, math, com;
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &com);

    float per=(phy+chem+bio+math+com)*0.2;
    printf("Percentage = %.2f\n", per);

    if(per>=90) printf("Grade A");
    else if(per>=80 && per<90) printf("Grade B");
    else if(per>=70 && per<80) printf("Grade C");
    else if(per>=60 && per<70) printf("Grade D");
    else if(per>=40 && per<60) printf("Grade E");
    else if(per<40) printf("Grade F");

    return 0;
}