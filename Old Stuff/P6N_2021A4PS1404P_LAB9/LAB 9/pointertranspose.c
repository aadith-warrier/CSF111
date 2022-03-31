#include <stdio.h>
#include "functions.h"

int pointertranspose(int *ptr)
{
    //Initialize the new array
    int arr2[c][r];

    //Transpose the array
    int a=0;
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            arr2[j][i]= * (ptr+a);
            a++;
        }
    }

    //Print the Transposed Array
    for(int i=0; i<r;i++){
        for (int j=0 ; j<c; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}