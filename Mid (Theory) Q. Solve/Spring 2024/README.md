## Answer to the Question 1 (a)
```
int Num, a;
    Num = 20 % 3;
    a = Num + 10;
    printf("%d %d ", Num, a);
    return 0;
```

## Answer to the Question 1 (b)
Output:
```
result = 6
a =  3
```

## Answer to the Question 2 (a)
```
    int num = 5, sum = 10, i = 4, j = 9;
    if (num == 1)
    {
        sum *= 3;
        sum += --j * 2;
        i--;
    }
    else if (num == 2 || num == 3)
    {
        sum += --j * 2;
        i--;
    }
    else if (num == 4)
    {
        sum = ++i * j--;
    }
    else if (num == 5)
    {
    }
    else
    {
        sum *= i++ / j--;
        i = i % j;
    }
```

## Answer to the Question 3 (a)
```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || i == n / 2)
            {
                printf("*");
            }
            else if (i < n / 2)
            {
                if (j == n - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (j == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
```

## Answer to the Question 3 (b)
```
    int i = 0, count = 0;
    int n = 12345;
    for (; n != 0;)
    {
        printf("%d", n % 10);
        count++;
        while (i < count)
        {
            printf("%d", n /= 10);
            i++;
        }
        printf("\n");
    }
```

## Answer to the Question 5
```
    int N, K;
    printf("N=");
    scanf("%d", &N);
    int arr[N];
    printf("Array Elements: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("K=");
    scanf("%d", &K);
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += K;
        }
        else
        {
            arr[i] -= K;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
```

## Answer to the Question 5
```
    int n;
    scanf("%d", &n);
    int A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = A[i][0];
        A[i][0] = A[i][n - 1];
        A[i][n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
```


<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_

