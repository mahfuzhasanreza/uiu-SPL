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