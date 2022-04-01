#include<stdio.h>

void main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,7,8,9,0};
    int a, b=3, c;
    c += b += 10;
    printf("%d", arr[15]);
    printf("%u \n", arr);
    printf("%u \n", arr+1);
    printf("%u \n", &arr);
    printf("%u \n", &arr+1);
    printf("%lu \n", sizeof(arr));
    printf("%lu \n", sizeof(arr[0]));

}