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