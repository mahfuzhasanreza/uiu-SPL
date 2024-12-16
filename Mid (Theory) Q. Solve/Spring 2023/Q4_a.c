/*
Write a C program to perform the following operations-
i) Take input of CGPA of 100 students
ii) Calculate the average of the CGPA of the students who achieved more than 3.00
iii) Find out the highest and lowest CGPA and how many students achieved that highest CGPA.
*/
#include <stdio.h>

int main() {
    float cgpa[100];

    for (int i = 0; i < 100; i++) {
        scanf("%f", &cgpa[i]);
        // if (cgpa[i] < 0.0 || cgpa[i] > 4.0) {
        //     printf("Please enter a value between 0.00 and 4.00.\n");
        //     i--;
        // }
    }

    float sum_above_3 = 0.0, average_above_3 = 0.0;
    int count_above_3 = 0;

    for (int i = 0; i < 100; i++) {
        if (cgpa[i] > 3.00) {
            sum_above_3 += cgpa[i];
            count_above_3++;
        }
    }

    if (count_above_3 > 0) {
        average_above_3 = sum_above_3 / count_above_3;
    }
    printf("Average 3.00: %.2f\n", average_above_3);

    float highest_cgpa = cgpa[0];
    float lowest_cgpa = cgpa[0];
    int count_highest = 0;

    for(int i = 0; i < 100; i++){
        if (cgpa[i] > highest_cgpa) {
            highest_cgpa = cgpa[i];
            count_highest = 1;
        } else if (cgpa[i] == highest_cgpa) {
            count_highest++;
        }

        if (cgpa[i] < lowest_cgpa) {
            lowest_cgpa = cgpa[i];
        }
    }

    printf("Highest CGPA: %.2f, achieved by %d student(s)\n", highest_cgpa, count_highest);
    printf("Lowest CGPA: %.2f\n", lowest_cgpa);

    return 0;
}
