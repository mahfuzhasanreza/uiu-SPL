## Solution Overview
  - Question 1
      - [Question 1 (a)]()
      - [Question 1 (b)]()
  - Question 2
      - [Question 2 (a)]()
      - [Question 2 (b)]()
  - Question 3
      - Question 3 (a)
      - Question 3 (b)
  - Question 4
  - Question 5
      - [Question 5 (a)]()
      - [Question 5 (b)]()

          
## Answer to the Question 1 (a)
```
Output:
    0  21  24  27	
    60  0  30  33	
    66  78  0  36	
    72  84  90  0
```

## Answer to the Question 1 (b)
```c
#include<stdio.h>

int main(){
    int mat[4][4]={{1,2,3,4}, {5,6,0,6}, {0,2,1,3}, {1,4,6,2}};

    long int sum=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j==0 || j==3 || i==j){
                sum+=mat[i][j];
            }
        }
    }
    printf("Sum: %ld", sum);

    return 0;
}
```

## Answer to the Question 2 (a)
```
Output:
    12 0 0
    12 24 24
    24 24 24
```

## Answer to the Question 2 (b)
```c
#include<stdio.h>
#include<string.h>

void additems(int items[], int add[], int n){
    for(int i=0; i<n; i++){
        items[i]+=add[i];
    }
}

void openDoor(char password[]){
    if(strcmp(password, "Narnia")==0){
        printf("Door to Narnia is open.");
    } else{
        printf("There is no door");
    }
}

int main(){
    int items[1000], add[1000];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &items[i], &add[i]);
    }

    additems(items, add, n);
    char str[100];
    scanf("%s", str);
    openDoor(str);
    
    return 0;
}
```

## Answer to the Question 3 (a)
```
Manual Trace:
    str1: Hello World
    str2: Programming
    str2: ProgrammingHell
```

## Answer to the Question 3 (b)
```c
#include<stdio.h>

int main(){
    char mainString[1000], substring[1000];
    printf("Main string: ");
    gets(mainString);
    fflush(stdin);
    printf("Substring: ");
    gets(substring);
    fflush(stdin);

    int i=0;
    int j=0;
    int match=0;
    while(mainString[i]!='\0'){
        if(mainString[i]==substring[j]){
            j++;
        } else{
            j=0;
        }
        if(substring[j]=='\0'){
            match=1;
            break;
        }
        i++;
    }

    if(match){
        printf("Substring matches");
    } else{
        printf("Substring does not match");
    }

    return 0;
}
```

## Answer to the Question 4
```c
#include<stdio.h>
#include<string.h>

struct Student{
    char name[1000];
    int id;
    float marks[5];
};

int main(){
    struct Student st[50];

    for(int i=0; i<50; i++){
        gets(st[i].name);
        scanf("%d", &st[i].id);
        for(int j=0; j<5; j++){
            scanf("%f", &st[i].marks[j]);
        }
        fflush(stdin);
    }

    for(int i=0; i<50; i++){
        long int totalMark=0;
        for(int j=0; j<5; j++){
            totalMark+=st[i].marks[j];
        }
        printf("Total marks of CT's of Student ID %d = %ld\n", st[i].id, totalMark);
    }

    for(int i=0; i<5; i++){
        float highest=st[0].marks[i];
        char highetScorer[1000];
        strcpy(highetScorer, st[0].name);
        for(int j=1; j<50; j++){
            if(highest<st[j].marks[i]){
                highest=st[j].marks[i];
                strcpy(highetScorer, st[j].name);
            }
        }
        printf("Highet scorer for CT-%d = %s\n", i+1, highetScorer);
    }

    return 0;
}
```

## Answer to the Question 5 (a)
```
Output:
    5
    13
    19
```

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

    FILE *outputFile;
    outputFile=fopen("Output.txt", "w");

    for(int j=0; j<i; j++){
        if(arr[j]%2==0){
            fprintf(outputFile, "%d\n", arr[j]);
        }
    }
    fclose(outputFile);

    return 0;
}
```

<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
