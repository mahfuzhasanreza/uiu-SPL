## Answer to the Question 1 (a)
```
(i) 1UIU : invalid (starting with a digit)
(ii) SPL_2023 : valid
(iii) char : invalid (it's a keyword)
(iv) SPL$ : invalid (there have a special character $)
(v) My-Course : invalid (there have a special character -)
```

## Answer to the Question 1 (b)
```
    a = 3
    b = 12.000000
    c = 2
    d = 1.000000
```

## Answer to the Question 1 (c)
```
i) Output:
    SPL
    Spring
ii) Output:
    Spring
```

## Answer to the Question 2 (a)
```c
#include<stdio.h>

int main(){
    int n, a;
    scanf("%d %d", &n, &a);
    int difference = n-a;

    switch(n>a) {
        case 1:
            switch(difference>5) {
                case 1:
                    printf("Difference is greater than 5 \n");
                    break;
                case 0:
                    printf("Difference is less than or equal to 5 \n");
                    break;
            }
            break;
        case 0:
            printf("Please give a larger value of n \n");
            break;        
    }

    return 0;
}
```

## Answer to the Question 2 (b)
|    i    |    j    | result |   x   |   y   |
|---------|---------|--------|-------|-------|
| garbage |    -    |   5    |   2   |   2   |
|   20    |    8    |   7    |   2   |   3   |
|   24    |    7    |   10   |   3   |   4   |
|   20    |    6    |   14   |   5   |   5   |
|   14    |    5    |   19   |   8   |   6   |
|    9    |    4    |   25   |  12   |   7   |
|    9    | 3 (False)|   25   |  12   |   7   |


## Answer to the Question 3 (a)
```c
#include<stdio.h>

int main(){

    int weeks = 2, days_in_week = 7;
    int i = 1;
    if(i <= weeks){
        do{
            printf("Week: %d\n", i);
            int j = 1;
            if(j <= days_in_week){
                do{
                    if (i%2 == 0) {
                        if(j%2 == 0)
                            printf(" Day: %d\n", j);
                    }
                    else{
                        if(j%2 != 0)
                        printf(" Day: %d\n", j);
                    }
                    ++j;
                } while(j <= days_in_week);
            }
            ++i;
        } while(i <= weeks);
    }

    return 0;
}
```

## Answer to the Question 3 (b)
```c
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int num=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            printf("  ");
        }
        int t=i*2+1;
        int k;
        for(k=0; k<(t+1)/2; k++){
            num+=2;
            printf("%d ", num);
        }
        for(; k<t; k++){
            num-=2;
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}
```

## Answer to the Question 4 (a)
```c
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
```

## Answer to the Question 4 (b)
[4(b) Solution](https://github.com/mahfuzhasanreza/uiu-SPL/blob/main/Mid%20(Theory)%20Q.%20Solve/Spring%202023/Q4_b.png)



<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
