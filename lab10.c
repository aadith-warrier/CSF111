#include <stdio.h>

int pointertranspose(int *ptr, int c, int r)
{
    //Initialize the new array
    int arr2[3][4];

    //Transpose the array
    int a=0;
    for (int i=0; i<4; i++){
        for(int j=0; j<3; j++){
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

void main(){
    int array[4][3] = {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    int c =3, r=4;
    pointertranspose(array, r, c);

}