/* 
Name:Mwaniki Maureen Wangui 
Reg no:CT100/G/26135/25
Description:c program 
*/


#include <stdio.h>

void writeInputFile() {
    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
    printf("Numbers saved to input.txt successfully.\n\n");
}

void processNumbers() {
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    FILE *fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    double average = (double)sum / count;

    fprintf(fpOut, "Sum = %d\nAverage = %.2f\n", sum, average);

    fclose(fp);
    fclose(fpOut);

    printf(" Sum and average saved to output.txt successfully.\n\n");
}

void displayFiles() {
    char ch;

    printf(" Contents of input.txt:\n");
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    printf("\n Contents of output.txt:\n");
    FILE *fpOut = fopen("output.txt", "r");
    if (fpOut == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fpOut)) != EOF) {
        putchar(ch);
    }
    fclose(fpOut);
}

int main() {
    writeInputFile();
    processNumbers();
    displayFiles();
    return 0;
}