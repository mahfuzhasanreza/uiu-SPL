#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile=fopen("Sample.txt", "r");

    if(inputFile==NULL){
        printf("File not found");
        return 0;
    }

    int arr[1000];
    int i=0;
    while(!feof(inputFile)){
        fscanf(inputFile, "%d", &arr[i++]);
    }
    fclose(inputFile);

    FILE *outputFile;
    outputFile=fopen("Output.txt", "w");

    for(int j=0; j<i; j++){
        if(arr[j]%2==0){
            fprintf(outputFile, "%d\n", arr[j]);
        }
    }
    fclose(outputFile);

    return 0;
}