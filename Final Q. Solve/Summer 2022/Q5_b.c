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
    while(!feof(inputFile)){
        fscanf(inputFile, "%d", &num[length++]);
    }
    fclose(inputFile);
    
    int median=num[length/2];
    printf("Median: %d\n", median);

    return 0;
}