## Solution Overview
  - Question 1
      - [Question 1 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-1-a)
      - [Question 1 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-1-b)
  - Question 2
      - [Question 2 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-2-a)
      - [Question 2 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-2-b)
  - Question 3
      - [Question 3 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-3-a)
      - [Question 3 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-3-b)
  - [Question 4](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-4)
  - Question 5
      - [Question 5 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-5-a)
      - [Question 5 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Final%20(Theory)%20Q.%20Solve/Summer%202022#answer-to-the-question-5-b)

          
## Answer to the Question 1 (a)
```
Output:
    0_1_2_3_4_
    0_5_6_7_
    0_8_9_
    0_10_
    0_
```

## Answer to the Question 1 (b)
```c
#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n/2; j++){
            int tmp=mat[i][j];
            mat[i][j]=mat[i][n-j-1];
            mat[i][n-j-1]=tmp;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## Answer to the Question 2 (a)
```
Output:
    3
    4
    6
    8
    10
    12
    14
    12
    10
    8
    6
    4
    3
    2
```

## Answer to the Question 2 (b)
```c
#include<stdio.h>

void inputData(int goals[], int mins[], int n){
    for(int i=0; i<n; i++){
        scanf("%d %d", &goals[i], &mins[i]);
    }
}

int countOfHattricks(int goals[], int n){
    int countHatt=0;
    for(int i=0; i<n; i++){
        if(goals[i]>=3){
            countHatt++;
        }
    }
    return countHatt;
}

int main(){
    int n;
    scanf("%d", &n);

    int goals[n], mins[n];
    inputData(goals, mins, n);
    
    printf("%d\n", countOfHattricks(goals, n));

    return 0;
}
```

## Answer to the Question 3 (a)
```c
#include<stdio.h>

void correctingStr(char *str){
    int readIndex=1, writeIndex=1;
    while(str[readIndex]!='\0'){
        if(str[readIndex]!=str[readIndex-1] || str[readIndex]!='a' && str[readIndex]!='e' && str[readIndex]!='i' && str[readIndex]!='o' && str[readIndex]!='u' && str[readIndex]!='A' && str[readIndex]!='E' && str[readIndex]!='I' && str[readIndex]!='O' && str[readIndex]!='U'){
            str[writeIndex++]=str[readIndex];
        }
        readIndex++;
    }
    str[writeIndex]='\0';
}

int main(){
    char str[1000];
    gets(str);

    correctingStr(str);
    printf("%s\n", str);

    return 0;
}
```

## Answer to the Question 3 (b)

Manual Trace:
    i    |    k    |       str1       |       str2
:-------:|:-------:|:----------------:|:---------------:
\-    |   \-    |      '\0'        |       BEST
\-    |   \-    |   HELLO FELLAS   |       BEST
6    |   \-    |   HELLO FELLAS   |       BEST
6    |    0    |   HELLO BELLAS   |       BEST
6    |    1    |   HELLO BELLAS   |       BEST
6    |    2    |   HELLO BESLAS   |       BEST
6    |    3    |   HELLO BESTAS   |       BEST
6    |    4    |   HELLO BESTAS   |       BEST
6    |   \-    |   SATSEB OLLEH   |       BEST
6    |   \-    | SATSEB OLLEHBEST |       BEST
6    |   \-    | SATSEB OLLEHBEST |  UIU IS THE BEST
    

## Answer to the Question 4
```c
#include<stdio.h>
#include<string.h>

struct Cricketer{
    int wickets, matches, runs;
    char name[1000], country[1000];
    float average;
};

int main(){
    struct Cricketer cricketerArr[100];

    for(int i=0; i<100; i++){
        gets(cricketerArr[i].name);
        gets(cricketerArr[i].country);
        scanf("%d %d %d", &cricketerArr[i].wickets, &cricketerArr[i].matches, &cricketerArr[i].runs);
        fflush(stdin);
    }

    for(int i=0; i<100; i++){
       cricketerArr[i].average=(float)cricketerArr[i].runs/cricketerArr[i].wickets;
    }

    int maxAvrgIndex=0;
    for(int i=1; i<100; i++){
        if(cricketerArr[i].average>cricketerArr[maxAvrgIndex].average){
            maxAvrgIndex=i;
        }
    }

    printf("All the information of maximum averege:: \n");
    printf("Name: %s\nCountry: %s\nWickets: %d\nMatches: %d\nRuns: %d\nAverage: %f\n", cricketerArr[maxAvrgIndex].name, cricketerArr[maxAvrgIndex].country, cricketerArr[maxAvrgIndex].wickets, cricketerArr[maxAvrgIndex].matches, cricketerArr[maxAvrgIndex].runs, cricketerArr[maxAvrgIndex].average);
    
    return 0;
}
```

## Answer to the Question 5 (a)
```
Output:
    -5-
    -13-
    -19-
```

## Answer to the Question 5 (b)
```c
#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile=fopen("numbers.txt", "r");

    if(inputFile==NULL){
        printf("File not found");
        return 0;
    }

    int length=0;
    int num[1000];
    while(!feof(inputFile)){
        fscanf(inputFile, "%d", &num[length++]);
    }
    fclose(inputFile);
    
    float median=0;
    if(length%2==0){
        median=(num[length/2]+num[length/2-1])/2.0;
    } else{
        median=num[length/2];
    }
    printf("Median: %d\n", median);

    return 0;
}
```

<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
