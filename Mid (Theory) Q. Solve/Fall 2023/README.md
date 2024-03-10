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

## Answer to the Question 3 (b)
```c
#include<stdio.h>

int main(){
    int a=10, b=20, count=0;

    int i=b;
    while(i>=a){
        int j=a;
        if(j<=b){
            do{
                printf("%d ",j);
                j++;
            } while(j<=b);
        }
        if(b%2!=0){
            printf("%d \n",a);
        } else{
            printf("%d \n",b);
        }
        i--;
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
    float arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%f", &arr[i]);
    }

    int k=0;
    for(int i=0; i<n; i++){
        if(arr[i]>500.0){
            arr[k++]=arr[i];
        }
    }
    for(; k<n; k++){
        arr[k]=-1;
    }

    for(int i=0; i<n; i++){
        printf("%f\n", arr[i]);
    }
    return 0;
}
```



<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
