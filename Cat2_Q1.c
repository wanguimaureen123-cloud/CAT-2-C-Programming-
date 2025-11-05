/*
Name:Mwaniki Maureen Wangui
Reg no :CT100/G/26135/25
Description:2D array
*/

#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    printf("Scores in the 2D array:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
