## Answer to the Question 1 (a)
```
(i) 1UIU : invalid (starting with a digit)
(ii) SPL_2023 : valid
(iii) char : invalid (it's a keyword)
(iv) SPL$ : invalid (there have a special character $)
(v) My-Course : invalid (there have a special character -)
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



<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
