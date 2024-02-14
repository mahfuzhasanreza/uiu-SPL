## Solution Overview
  - [Question 1]()
  - [Question 2]()
  - [Question 3]()
  - [Question 4]()
  - [Question 5]()
  - [Question 6]()
  - [Question 7]()
  - [Question 8]()
  - [Question 9]()
  - [Question 10]()

          
## Answer to the Question 1
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int count=0;
    for(int i=1; i<=n; i++){
        int j;
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(; j<=n; j++){
            count++;
            if(count==n+1) count=1;
            printf("%d", count);
        }
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 2
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        int count=n;
        int j;
        for(j=1; j<n-i; j++){
            printf(" ");
            --count;
        }
        for(; j<n; j++) printf("%d", --count);
        
        for(int k=1; k<i; k++) printf("%d", ++count);
        
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 3
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 4
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) printf("*");
        printf("\n");
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 5
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=n-1; i>=0; i--){
        for(int j=1; j<=i; j++)
            printf(" ");
        
        for(int j=1; j<=n; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 6
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int count;
    if(n%2==0) count=n/2;
    else count=n/2+1; 

    for(int i=1; i<=n; i++){
        if(i==n/2+1){
            for(int j=1; j<=n; j++) printf("*");
            
            printf("\n");
            continue;
        }
        if(n%2==0 && i==n/2){
            for(int j=1; j<=n; j++) printf("*");
            
            printf("\n");
            continue;
        }
        if(n%2==0){
            for(int j=1; j<=n/2-1; j++) printf(" ");
            
            printf("*");
        } else{
            for(int j=1; j<=n/2; j++) printf(" ");
            printf("*");
        }
            
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 7
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n) printf("*");

            else printf(" ");
            
        }
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 8
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int m=0;
    int k=1;
    for(int i=1; i<=n/2+1; i++){
        m++;
        for(int j=1; j<=n/2+1-m; j++) printf(" ");
        
        for(int j=1; j<=k; j++){
            if(n%2==0 && j==k) break;
            printf("*");
        }
        k+=2;
        if(n%2==0 && i==1) printf("*");
        printf("\n");        
    }

    return 0;
}
```

## Answer to the Question 9
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int k=n;
    int m=n/2+2;
    for(int i=1; i<=n/2+1; i++){
        m--;
        for(int j=1; j<=n/2+1-m; j++) printf(" ");
        for(int j=1; j<=k; j++) printf("*");
        
        k-=2;
        if(n%2==0 && i==n/2+1) printf("*");
        printf("\n");        
    }

    return 0;
}
```

## Answer to the Question 10
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int m=0, k=1;
    for(int i=1; i<=n/2+1; i++){
        m++;
        for(int j=1; j<=n/2+1-m; j++) printf(" ");
        for(int j=1; j<=k; j++){
            if(n%2==0 && j==k) break;
            printf("*");
        }
        k+=2;
        if(n%2==0 && i==1) printf("*");
        printf("\n");        
    }

    k=n-2;
    m=n/2+1;
    for(int i=1; i<=n/2+1; i++){
        if(i==1) continue;
        m--;
        
        for(int j=1; j<=n/2+1-m; j++) printf(" ");
        for(int j=1; j<=k; j++) printf("*");

        k-=2;
        if(n%2==0 && i==n/2+1) printf("*");
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
