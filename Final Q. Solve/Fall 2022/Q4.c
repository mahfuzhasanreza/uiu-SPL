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