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