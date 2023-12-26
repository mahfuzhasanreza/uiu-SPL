## Solution Overview
  - Question 1
      - a
      - b
  - Question 2
      - a
      - b
  - Question 3
  - Question 4
      - a
      - b
  - Question 5
      - a
      - b

          
## Answer to the Question 1 (a)
```c
#include<stdio.h>

void input_CT_marks(float ct_marks[], int n){
    for(int i=0; i<n; i++){
        scanf("%f", &ct_marks[i]);    
    }
}

float take_Highest_CT(float ct_marks[], int n){
    float highest=0;
    for(int i=0; i<n; i++){
        if(highest<ct_marks[i]){
            highest=ct_marks[i];
        }
    }
    return highest;
}

int main(){
    int n;
    scanf("%d", &n);
    float ct_marks[n];

    input_CT_marks(ct_marks, n);
    printf("%f", take_Highest_CT(ct_marks, n));

    return 0;
}
```

## Answer to the Question 1 (b)
```
Output:
    90 246 156
    78 11922 156
    12078 11922 156
    90 246 156
```

## Answer to the Question 2 (a)
```
Output:
    String 1:bea
    String 2: beautifulbea
    Final: aeb
```

## Answer to the Question 2 (b)
```c
#include<stdio.h>

int main(){
    char str[1000];
    gets(str);
    
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>'A' && str[i]<='Z' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            if(str[i]=='Z'){
                str[i]='A';
            } else{
                str[i]++;
            }
        } else if(str[i]>'a' && str[i]<='z' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            if(str[i]=='z'){
                str[i]='a';
            } else{
                str[i]++;
            }
        }
        i++;
    }
    printf("%s", str);

    return 0;
}
```

## Answer to the Question 3
```c
#include<stdio.h>

struct Employee{
    int id;
    char name[1000];
    float salary;
    int scores[12];
};

int main(){
    int N;
    scanf("%d", &N);
    struct Employee arr[N];

    for(int i=0; i<N; i++){
        scanf("%d %s %f", &arr[i].id, arr[i].name, &arr[i].salary);
        for(int j=0; j<12; j++){
            scanf("%d", &arr[i].scores[j]);
        }
    }

    for(int i=0; i<N; i++){
        float sum=0;
        for(int j=0; j<12; j++){
            sum+=arr[i].scores[j];
        }
        float avrg=sum/12;
        if(avrg>80){
            printf("Employee with id=%d is eligible for increment.\n", arr[i].id);
        } else{
            printf("Employee with id=%d is not eligible for increment.\n", arr[i].id);
        }
    }

    return 0;
}
```

## Answer to the Question 4 (a)
```
Output:
    137
```

## Answer to the Question 4 (b)
```c
#include<stdio.h>
#include<math.h>

void function(int *x, float *a, float *b, float *c, float *d){
    float m, w;
    float e=*c; // Let e=*c // In Q. : w=c(1-e^(-dx)), but e is not mentioned anywhere
    w = *c * (1 - pow(e, (-*d * *x)));
    m = *a * pow(w, *b);
    printf("%f\n%f\n", w, m);
}

int main(){
    int x=35;
    float a=0.87, b=0.45, c=800, d=3.5;
    function(&x, &a, &b, &c, &d);
    return 0;
}
```

## Answer to the Question 5 (a)

Manual Trace:
| i | arr\[0] | arr\[1] | arr\[2] | arr\[3] | arr\[4] | arr\[5] | arr\[6] |
|:----:|:-------:|:--------:|:--------:|:--------:|:--------:|:------:|:------:|
\-|   6   |   3    |    2   |    7   |    0   |    1   |    5 
0 |   6   |    3   |    2   |    7   |    0   |    1   |    5
1 |   6   |    3   |    1   |    7   |    0   |    1   |    5
2 |   6   |    3   |    1   |   -3   |    0   |    1   |    5
3 |   6   |    3   |    1   |   -3   |    0   |    1   |    5
4 |   6   |    3   |    1   |   -3   |    0   |    1   |    5
5 |   6   |    3   |    1   |   -3   |    0   |    1   |   -9
6 |   6   |    3   |    1   |   -3   |    0   |    1   |   -9

## Answer to the Question 5 (b)
```c
#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile=fopen("Sample.txt", "r");

    if(inputFile==NULL){
        printf("File not found");
        return 0;
    }

    int arr[1000];
    int i=0;
    while(!feof(inputFile)){
        fscanf(inputFile, "%d", &arr[i++]);
    }
    fclose(inputFile);

    long int sum=0;
    for(int j=0; j<i; j++){
        if(arr[j]%7==0){
            sum+=arr[j];
        }
    }

    FILE *outputFile;
    outputFile=fopen("Output.txt", "w");

    fprintf(outputFile, "Sum: %ld", sum);
    fclose(outputFile);

    return 0;
}
```

<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
