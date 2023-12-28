#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile=fopen("in.txt", "r");

    int max=0;
    if(inputFile==NULL){
        printf("Input file not found\n");
    }
    else{
        while(!feof(inputFile)){
            int num;
            fscanf(inputFile, "%d", &num);
            if(max<num) max=num;
        }
        fclose(inputFile);
    }

    FILE *outputFile;
    outputFile=fopen("out.txt", "w");

    if(outputFile==NULL){
        printf("Output file not found\n");
    }
    else{
        fprintf(outputFile, "Maximum Value: %d", max);
        fclose(outputFile);
    }

    return 0;
}