## Solution Overview
  - Question 1
      - [Question 1 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-1-a)
      - [Question 1 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-1-b)
  - Question 2
      - [Question 2 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-2-a)
      - [Question 2 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-2-b)
  - [Question 3](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-3)
  - Question 4
      - [Question 4 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-4-a)
      - [Question 4 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-4-b)
  - Question 5
      - [Question 5 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-5-a)
      - [Question 5 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Summer%202023/README.md#answer-to-the-question-5-b)

          
## Answer to the Question 1 (a)
```c
#include<stdio.h>

int IsEven(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}

long ComputeEvenSum(int arr[], int n){
    long sum=0;
    for(int i=0; i<n; i++){
        if(IsEven(arr[i])){
            sum+=arr[i];
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Even Sum: %ld", ComputeEvenSum(arr, n));

    return 0;
}
```

## Answer to the Question 1 (b)
```
Output:
    1 3 5 2
    8 3 4 2
    16 3 4 12
    32 29 4 12
```

## Answer to the Question 2 (a)
```
Output:
    Hello
    # Gen Z
```

## Answer to the Question 2 (b)
```c
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int countOccurrences(char *firstStr, char *secondStr){
    int firstLen=strlen(firstStr);
    int secondLen=strlen(secondStr);
    int count=0;

    for(int i=0; i<=firstLen-secondLen; i++){
        if(strncmp(firstStr+i, secondStr, secondLen)==0){
            count++;
        }
    }

    return count;
}

int main(){
    char firstStr[1000];
    char secondStr[1000];

    printf("First string: ");
    gets(firstStr);
    fflush(stdin);
    printf("Second string: ");
    scanf("%s", secondStr);

    int i=0;
    while(firstStr[i]!='\0'){
        firstStr[i]=tolower(firstStr[i]);
        i++;
    }
    i=0;
    while(secondStr[i]!='\0'){
        secondStr[i]=tolower(secondStr[i]);
        i++;
    }

    printf("%d", countOccurrences(firstStr, secondStr));

    return 0;
}
```

## Answer to the Question 3
```c
#include<stdio.h>
#include<string.h>

struct Cricketer{
    char name[50], country[50], type[10];
    int wickets[30], runs[30], match;
    float performance;
};

int main(){
    struct Cricketer cricketerArr[100];

    for(int i=0; i<100; i++){
        gets(cricketerArr[i].name);
        gets(cricketerArr[i].country);
        scanf("%s", cricketerArr[i].type);
        
        while(strcmp(cricketerArr[i].type, "bowler")!=0 && strcmp(cricketerArr[i].type, "batsman")!=0){
            printf("This type is not valid.\n");
            scanf("%s", cricketerArr[i].type);
            fflush(stdin);
        }

        for(int j=0; j<30; j++){
            scanf("%d", &cricketerArr[i].wickets[j]);
        }
        for(int j=0; j<30; j++){
            scanf("%d", &cricketerArr[i].runs[j]);
        }
        scanf("%d", &cricketerArr[i].match);
        fflush(stdin);
    }

    for(int i=0; i<100; i++){
        if(strcmp(cricketerArr[i].type, "bowler")==0){
            float totalWickets=0;
            for(int j=0; j<30; j++){
                totalWickets+=cricketerArr[i].wickets[j];
            }
            cricketerArr[i].performance=totalWickets/cricketerArr[i].match;
        } else if(strcmp(cricketerArr[i].type, "batsman")==0){
            float totalRuns=0;
            for(int j=0; j<30; j++){
                totalRuns+=cricketerArr[i].runs[j];
            }
            cricketerArr[i].performance=totalRuns/cricketerArr[i].match;
        }
    }

    int highPerformIndex=0;
    for(int i=1; i<100; i++){
        if(cricketerArr[i].performance>cricketerArr[highPerformIndex].performance){
            highPerformIndex=i;
        }
    }

    printf("Cricketer of the Year:: \n");
    printf("Name: %s\nCountry: %s\nType: %s\n", cricketerArr[highPerformIndex].name, cricketerArr[highPerformIndex].country, cricketerArr[highPerformIndex].type);
    printf("Wickets: ");
    for(int i=0; i<30; i++){
        printf("%d ", cricketerArr[highPerformIndex].wickets[i]);
    }
    printf("\nRuns: ");
    for(int i=0; i<30; i++){
        printf("%d ", cricketerArr[highPerformIndex].runs[i]);
    }
    printf("\nMatch: %d\nPerformance: %f\n", cricketerArr[highPerformIndex].match, cricketerArr[highPerformIndex].performance);

    return 0;
}
```

## Answer to the Question 4 (a)
```
Output:
    10 21 40
    20 24 40
```

## Answer to the Question 4 (b)
```
Output:
    10 21 40
    20 24 40
```

## Answer to the Question 5 (a)
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
        if(arr[j]%2==0 && arr[j]%4==0){
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

## Answer to the Question 5 (b)
```c
#include<stdio.h>

int sumOfOddElements(int *arr, int size){
    // Write my code here
    int sum=0;
    for(int i=0; i<size; i++){
        if(*(arr+i)%2 != 0){
            sum += *(arr+i);
        }
    }
    return sum;
}

int main(){
    int numbers[]={10, 21, 35, 42, 57, 68, 73};
    int n=sizeof(numbers)/sizeof(numbers[0]);
    int sum=sumOfOddElements(numbers, n);
    printf("Sum of odd elements: %d\n", sum);
    return 0;
}
```

<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
