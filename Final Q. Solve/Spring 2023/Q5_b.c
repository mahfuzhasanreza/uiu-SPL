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

    long int sum=0;
    for(int j=0; j<i; j++){
        if(arr[j]%7==0){
            sum+=arr[j];
        }
    }

    FILE *outputFile;
    outputFile=fopen("Output.txt", "w");

    fprintf(outputFile, "Sum: %ld", sum);
    fclose(outputFile);

    return 0;
}