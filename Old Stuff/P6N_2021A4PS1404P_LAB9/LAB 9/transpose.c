#include<stdio.h>
#include "functions.h"

int transpose(int arr[r][c])
{
    //Defining a new array
    int arr1[c][r];


    //Transpose the original array
    for(int i=0; i<r;i++){
        for (int j=0 ; j<c; j++){
            int temp;
            arr1[i][j]=arr[j][i];
        }
    }

    //Print the transposed array
    for(int i=0; i<r;i++){
        for (int j=0 ; j<c; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
