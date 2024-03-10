## Answer to the Question 1 (a)
```
(i) int_a : valid
(ii) _num : valid
(iii) 99p : invalid (starting with a digit)
(iv) “my_val” : invalid (there have a special character "")
```

## Answer to the Question 3 (a)
```c
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==1 || j==n) printf("*");
            else if(i<=(n+1)/2 && (i==j || i+j==n+1)) printf("*");
            else printf(" ");
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
