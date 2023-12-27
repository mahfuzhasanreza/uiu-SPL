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