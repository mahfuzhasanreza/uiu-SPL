#include<stdio.h>
#include<string.h>

struct Cricketer{
    char name[50], country[50], type[10];
    int wickets[30], runs[30], match;
    float performance;
};

int main(){
    struct Cricketer cricketerArr[100];

    for(int i=0; i<100; i++){
        gets(cricketerArr[i].name);
        gets(cricketerArr[i].country);
        scanf("%s", cricketerArr[i].type);
        
        while(strcmp(cricketerArr[i].type, "bowler")!=0 && strcmp(cricketerArr[i].type, "batsman")!=0){
            printf("This type is not valid.\n");
            scanf("%s", cricketerArr[i].type);
            fflush(stdin);
        }

        for(int j=0; j<30; j++){
            scanf("%d", &cricketerArr[i].wickets[j]);
        }
        for(int j=0; j<30; j++){
            scanf("%d", &cricketerArr[i].runs[j]);
        }
        scanf("%d", &cricketerArr[i].match);
        fflush(stdin);
    }

    for(int i=0; i<100; i++){
        if(strcmp(cricketerArr[i].type, "bowler")==0){
            float totalWickets=0;
            for(int j=0; j<30; j++){
                totalWickets+=cricketerArr[i].wickets[j];
            }
            cricketerArr[i].performance=totalWickets/cricketerArr[i].match;
        } else if(strcmp(cricketerArr[i].type, "batsman")==0){
            float totalRuns=0;
            for(int j=0; j<30; j++){
                totalRuns+=cricketerArr[i].runs[j];
            }
            cricketerArr[i].performance=totalRuns/cricketerArr[i].match;
        }
    }

    int highPerformIndex=0;
    for(int i=1; i<100; i++){
        if(cricketerArr[i].performance>cricketerArr[highPerformIndex].performance){
            highPerformIndex=i;
        }
    }

    printf("Cricketer of the Year:: \n");
    printf("Name: %s\nCountry: %s\nType: %s\n", cricketerArr[highPerformIndex].name, cricketerArr[highPerformIndex].country, cricketerArr[highPerformIndex].type);
    printf("Wickets: ");
    for(int i=0; i<30; i++){
        printf("%d ", cricketerArr[highPerformIndex].wickets[i]);
    }
    printf("\nRuns: ");
    for(int i=0; i<30; i++){
        printf("%d ", cricketerArr[highPerformIndex].runs[i]);
    }
    printf("\nMatch: %d\nPerformance: %f\n", cricketerArr[highPerformIndex].match, cricketerArr[highPerformIndex].performance);

    return 0;
}