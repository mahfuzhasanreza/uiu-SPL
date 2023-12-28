## Solution Overview
  - Question 1
      - [Question 1 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-1-a)
      - [Question 1 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-1-b)
  - Question 2
      - [Question 2 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-2-a)
      - [Question 2 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-2-b)
  - [Question 3](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-3)
  - Question 4
      - [Question 4 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-4-a)
      - [Question 4 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-4-b)
  - Question 5
      - [Question 5 (a)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-5-a)
      - [Question 5 (b)](https://github.com/mahfuzhasanreza/UIU-SPL/blob/main/Final%20Q.%20Solve/Fall%202023/README.md#answer-to-the-question-5-b)

          
## Answer to the Question 1 (a)
```c
#include<stdio.h>

int updateBalance(float *balance, int id, int tranType, float amount){
    if(tranType==2){
        balance[id]+=amount;
        return 1;
    }
    if(tranType==1){
        if(amount>balance[id] && amount>0){
            printf("Not sufficient balance\n");
            return 0;
        }
        balance[id]-=amount;
        return 1;
    }
}

int main(){
    float balance[2];
    for(int i=0; i<2; i++){
        scanf("%f", &balance[i]);
    }

    int id, tranType;
    float amount;
    scanf("%d %d %f", &id, &tranType, &amount);

    int isSuccessful=updateBalance(balance, id, tranType, amount);
    if(isSuccessful){
        printf("Updated Balance: %f\n", balance[id]);
    }

    return 0;
}
```

## Answer to the Question 1 (b)
```
Output:
    -10, -8, -6, -4, -2,
```

## Answer to the Question 2 (a)

Manual Trace:
i | m |            str1                 |     str2
:---:|:---:|:-----------------------------:|:--------------:
\- | \- |         CSE-1111 SPE            | I am a UIUian
4 | \- |         CSE-1111 SPE            | I am a UIUian
4 | 0 |         CSE-I111 SPE            | I am a UIUian
4 | 3 |         CSE-I11m SPE            | I am a UIUian
4 | 6 |         CSE-I11m S E            | I am a UIUian
4 | 9 |         CSE-I11m S E            | I am a UIUian
4 | \- |    CSE-I11m S EI am a UIUian    | I am a UIUian
4 | \- | CSE-I11m S EI am a UIUianCSE is | I am a UIUian

## Answer to the Question 2 (b)
```c
#include<stdio.h>

void displayVowelCount(char *str){
    int countA=0, countE=0, countI=0, countO=0, countU=0;

    int j=0;
    while(str[j]!='\0'){
        if(str[j]=='a' || str[j]=='A')
            countA++;
        else if(str[j]=='e' || str[j]=='E')
            countE++;
        else if(str[j]=='i' || str[j]=='I')
            countI++;
        else if(str[j]=='o' || str[j]=='O')
            countO++;
        else if(str[j]=='u' || str[j]=='U')
            countU++;
        j++;
    }
    printf("A/a: %d\nE/e: %d\nI/i: %d\nO/o: %d\nU/u: %d\n", countA, countE, countI, countO, countU);
}

int main(){
    char str[1000];

    gets(str);
    displayVowelCount(str);

    return 0;
}
```

## Answer to the Question 3
```c
#include<stdio.h>

struct Customer{
    char name[1000];
    int id, times;
    float money[1000];
};

int main(){
    struct Customer customer[100];

    for(int i=0; i<100; i++){
        gets(customer[i].name);
        scanf("%d %d", &customer[i].id, &customer[i].times);
        for(int j=0; j<customer[i].times; j++){
            scanf("%f", &customer[i].money[j]);
        }
        fflush(stdin);
    }

    float avrg[100];
    for(int i=0; i<100; i++){
        float totalMoney=0;
        for(int j=0; j<customer[i].times; j++){
            totalMoney+=customer[i].money[j];
        }
        avrg[i]=totalMoney/customer[i].times;
    }

    int bestCustomerIndex=-1;
    for(int i=0; i<100; i++){
        if(customer[i].times>10){
            if(i==0) bestCustomerIndex=i;
            else{
                if(avrg[i]>avrg[bestCustomerIndex]){
                    bestCustomerIndex=i;
                }
            }
        }
    }
    
    if(bestCustomerIndex!=-1){
        printf("Best customer name: %s\n", customer[bestCustomerIndex].name);
    }

    return 0;
}
```

## Answer to the Question 4 (a)
```c
#include<stdio.h>

int main(){
    int num=10;
    int *ptr=&num;

    printf("Before modification: %d\n", num);
    *ptr *= 2;
    printf("After modification: %d\n", num);

    return 0;
}
```

## Answer to the Question 4 (b)
```
Output:
    2 5 8 11 14
```

## Answer to the Question 5 (a)
```
Output:
    How are you?
    How are you?
    How are you?
    How are you?
    How are you?
    How are you?
    I am fine
    I am fine
    I am fine
    I am fine
    I am fine
```

## Answer to the Question 5 (b)
```c
#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile=fopen("in.txt", "r");

    int max=0;
    if(inputFile==NULL){
        printf("Input file not found\n");
    }
    else{
        while(!feof(inputFile)){
            int num;
            fscanf(inputFile, "%d", &num);
            if(max<num) max=num;
        }
        fclose(inputFile);
    }

    FILE *outputFile;
    outputFile=fopen("out.txt", "w");

    if(outputFile==NULL){
        printf("Output file not found\n");
    }
    else{
        fprintf(outputFile, "Maximum Value: %d", max);
        fclose(outputFile);
    }

    return 0;
}
```

<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
