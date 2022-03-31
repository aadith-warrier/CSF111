#include <stdio.h>
#include "functions.h"

int main(){

    //This block reads number of rows, coloumns
    printf("Enter the no.of rows:");
    scanf("%d", &r);
    printf("Enter the no.of columns:");
    scanf("%d", &c);

    //Initializing the array
    int arr[r][c];
    for(int i=0; i<r;i++){
        for (int j=0 ; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    //Initializing Pointer
    int *ptr = arr;

    //Calling the Functions
    transpose(arr);

    pointertranspose(ptr);

}