#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile=fopen("numbers.txt", "r");

    if(inputFile==NULL){
        printf("File not found");
        return 0;
    }

    int length=0;
    int num[1000];
    while(fscanf(inputFile, "%d", &num[length]) != EOF){
        length++;
    }
    fclose(inputFile);
    
    float median=0;
    if(length%2==0){
        median=(num[length/2]+num[length/2-1])/2.0;
    } else{
        median=num[length/2];
    }
    printf("Median: %f\n", median);

    return 0;
}
