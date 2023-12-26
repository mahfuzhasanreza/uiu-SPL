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