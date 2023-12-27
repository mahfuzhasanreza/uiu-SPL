#include<stdio.h>
#include<string.h>

struct Cricketer{
    int wickets, matches, runs;
    char name[1000], country[1000];
    float average;
};

int main(){
    struct Cricketer cricketerArr[100];

    for(int i=0; i<100; i++){
        gets(cricketerArr[i].name);
        gets(cricketerArr[i].country);
        scanf("%d %d %d", &cricketerArr[i].wickets, &cricketerArr[i].matches, &cricketerArr[i].runs);
        fflush(stdin);
    }

    for(int i=0; i<100; i++){
       cricketerArr[i].average=(float)cricketerArr[i].runs/cricketerArr[i].wickets;
    }

    int maxAvrgIndex=0;
    for(int i=1; i<100; i++){
        if(cricketerArr[i].average>cricketerArr[maxAvrgIndex].average){
            maxAvrgIndex=i;
        }
    }

    printf("All the information of maximum averege:: \n");
    printf("Name: %s\nCountry: %s\nWickets: %d\nMatches: %d\nRuns: %d\nAverage: %f\n", cricketerArr[maxAvrgIndex].name, cricketerArr[maxAvrgIndex].country, cricketerArr[maxAvrgIndex].wickets, cricketerArr[maxAvrgIndex].matches, cricketerArr[maxAvrgIndex].runs, cricketerArr[maxAvrgIndex].average);
    
    return 0;
}