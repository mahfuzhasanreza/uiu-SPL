## Answer to the Question 1 (a)
```
(i) is-Val : invalid (there have a special character -)
(ii) a1234 : valid
(iii) while : invalid (it's a keyword)
(iv) _1num_new : valid
(v) CSE 1111: invalid (there have a space)
```

## Answer to the Question 1 (b)
```
(i) a = 5.000000
(ii) b = 2
(iii) c = 16
(iv) d = 9
(v) result = 1.000000
```
## Answer to the Question 1 (c)
(i) Output:
```
Pattern
FizzBuzz
```
(ii) Output:
```
Fizz
```
## Answer to the Question 2 (a)
```
char rank;
    scanf(“% c”, &rank);
    int bonus = 0;
    if (rank == 'p')
    {
        bonus += 20;
        bonus += 20;
        bonus += 20;
    }
    else if (rank == 'g')
    {
        bonus += 20;
        bonus += 20;
    }
    else if (rank == 's')
    {
        bonus += 20;
    }
    else if (rank == 's')
    {
        bonus += 10;
    }
    printf(“\n % d”, bonus);
```

## Answer to the Question 2 (b)
```
```

## Answer to the Question 3 (a)
```c
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int k=n-i-1;
        for(int j=0; j<n*2-i; j++){
            if(j<k) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
```
## Answer to the Question 3 (b)
```
int arr[10] = {0};
    int k = 15, int i = 1;
    while (i < 6)
    {
        arr[i] = ++k - 2;
        k++;
        i += 2;
    }
    int c = 0;
```
```
    int i = 6;
    while (i < 10)
    {
        int j = 9;
        while (j >= i)
        {
            arr[j] = ++c;
            j--;
        }
        i++;
    }
    i = 0;
    while (i < 10)
    {
        if (i % 2 == 0)
            arr[i] = ++k;
        i++;
    }
```
## Answer to the Question 4 (a)
```c
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k=n/2-1;
    for(int i=0; i<(n/2)/2; i++){
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        k--;
    }
    k=n/2+1;
    for(int j=0; j<(n/2)/2; j++){
        int temp=arr[n-j-1];
        arr[n-j-1]=arr[k];
        arr[k]=temp;
        k++;
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
```

## Answer to the Question 4 (b)
```c
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    long int sum=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            if(i%2!=0){
                printf("%d ", i);
            } else{
                sum+=i;
            }
        }
    }
    printf("\n%d", sum);
    
    return 0;
}
```


<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
