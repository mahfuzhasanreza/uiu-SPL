## Solution Overview
  - [Question 1](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-1)
  - [Question 2](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-2)
  - [Question 3](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-3)
  - [Question 4](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-4)
  - [Question 5](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-5)
  - [Question 6](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-5)
  - [Question 7](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-5)
  - [Question 8](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-5)
  - [Question 9](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-5)
  - [Question 10](https://github.com/mahfuzhasanreza/UIU-SPL/tree/main/Assignment%20(Lab)%20Q.%20Solve/Assignment%201#answer-to-the-question-5)

          
## Answer to the Question 1
```c
#include<stdio.h>

int main(){
    char mainString[1000], substring[1000];
    printf("Mainstring: ");
    scanf("%s", mainString);
    printf("Substring: ");
    scanf("%s", substring);

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
        printf("Found");
    } else{
        printf("Not Found");
    }

    return 0;
}
```

## Answer to the Question 2
```c
#include<stdio.h>
#include<math.h>

int is_perfect_square(int x){
    if(sqrt(x)*sqrt(x)==x) return 1;
    return 0;
}

int are_digits_non_decreasing(int x, int prev_digit){
    if(x==0) return 1;

    int currentDigit=x%10;
    if(currentDigit<=prev_digit) return are_digits_non_decreasing(x/10, currentDigit);
    else return 0;
}

int check_are_digits_non_decreasing(int x){
    if(are_digits_non_decreasing(x, 10)) return 1;
    return 0;
}

void find_perfect_square_sorcerers(int start, int end){
    printf("Perfect Square Sorcerers within the range [1, 400]:\n");
    for(int i=start; i<=end; i++){
        if(is_perfect_square(i) && check_are_digits_non_decreasing(i)) printf("%d\n", i);
    }
}

int main(){
    int start, end;

    printf("Enter the range [start, end]: ");
    scanf("%d %d", &start, &end);
    find_perfect_square_sorcerers(start, end);

    return 0;
}
```

## Answer to the Question 3
```c
#include<stdio.h>
#include<string.h>

struct Employee{
    int employeeID;
    char name[50];
    int age;
};

void addEmployee(struct Employee *EmployeeList, int *numEmployees){
    if(*numEmployees<100){
        printf("Enter details for the new employee:\n");
        printf("Employee ID: ");
        scanf("%d", &EmployeeList[*numEmployees].employeeID);
        printf("Name: ");
        scanf("%s", EmployeeList[*numEmployees].name);
        printf("Age: ");
        scanf("%d", &EmployeeList[*numEmployees].age);

        (*numEmployees)++;
        printf("New employee added.\n");
    } 
    else printf("Cannot add more employees. Maximum limit reached.\n");
}

void displayEmployee(struct Employee *Employee_ptr){
    printf("Employee ID: %d\n", Employee_ptr->employeeID);
    printf("Name: %s\n", Employee_ptr->name);
    printf("Age: %d\n", Employee_ptr->age);
}

void updateEmployeeInfo(struct Employee *EmployeeList, int *numEmployees, char *EmployeeName){
    int found=0;

    for(int i=0; i<*numEmployees; i++){
        if(strcmp(EmployeeList[i].name, EmployeeName)==0){
            printf("Enter new age: ");
            scanf("%d", &EmployeeList[i].age);
            printf("Employee information updated.\n");
            found=1;
            break;
        }
    }

    if(!found){
        if(*numEmployees<100){
            printf("Employee not found. Adding as a new employee.\n");
            printf("Enter details for the new employee:\n");
            printf("Employee ID: ");
            scanf("%d", &EmployeeList[*numEmployees].employeeID);
            strcpy(EmployeeList[*numEmployees].name, EmployeeName);
            printf("Age: ");
            scanf("%d", &EmployeeList[*numEmployees].age);

            (*numEmployees)++;
        }
        else printf("Cannot add more employees. Maximum limit reached.\n");
    }
}

void displayAllEmployees(struct Employee *EmployeeList, int numEmployees) {
    printf("Employee List:\n");
    for(int i=0; i<numEmployees; i++) {
        printf("Employee %d:\n", i+1);
        displayEmployee(&EmployeeList[i]);
    }
}

int main(){
    struct Employee EmployeeList[100];
    int numEmployees=0;

    int choice;
    char EmployeeName[50];

    do{
        printf("1. Add Employee\n");
        printf("2. Update Employee Information\n");
        printf("3. Display All Employees\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addEmployee(EmployeeList, &numEmployees);
                break;
            case 2:
                printf("Enter the name of the employee to update: ");
                scanf("%s", EmployeeName);
                updateEmployeeInfo(EmployeeList, &numEmployees, EmployeeName);
                break;
            case 3:
                displayAllEmployees(EmployeeList, numEmployees);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice!=4);

    return 0;
}
```

## Answer to the Question 4
```c
#include <stdio.h>

int is_prime(int x){
    if(x<2) return 0;

    for(int i=2; i*i<=x; i++) {
        if (x%i==0) return 0;
    }
    return 1;
}

int reverse_number(int x, int reversed){
    if(x==0) return reversed;
    return reverse_number(x/10, reversed*10+x%10);
}

int is_palindromic_prime(int x){
    if(is_prime(x) && (x==reverse_number(x, 0))) return 1;
    return 0;
}

void find_superhero_palindromic_primes(int start, int end) {
    printf("Palindromic prime numbers within the range %d to %d are:\n", start, end);
    for (int i=start; i<=end; i++) {
        if(is_palindromic_prime(i)) printf("%d\n", i);
    }
}

int main(){
    int lower_limit, upper_limit;

    printf("Enter lower limit: ");
    scanf("%d", &lower_limit);
    printf("Enter upper limit: ");
    scanf("%d", &upper_limit);

    find_superhero_palindromic_primes(lower_limit, upper_limit);

    return 0;
}
```

## Answer to the Question 5
```c
#include <stdio.h>
#include <string.h>

struct demons{
    char name[60];
    int power;
};

int onlyAlphabets(char *input) {
    for(int i=0; input[i]!='\0'; i++){
        if(!((input[i]>='a' && input[i]<='z') || (input[i]>='A' && input[i]<='Z'))) return 0;
    }
    return 1;
}

int Multiple_of_5(int x){
    if(x%5==0) return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    struct demons demonList[n];
    for(int i=0; i<n; i++){
        scanf("%s %d", demonList[i].name, &demonList[i].power);
    }

    int count=0;
    for(int i=0; i<n; i++){
        if(onlyAlphabets(demonList[i].name) && Multiple_of_5(demonList[i].power)) count++;
    }
    printf("%d\n", count);

    return 0;
}
```

<br>

## _Author: [Mahfuz Hasan Reza](https://github.com/mahfuzhasanreza/)_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
