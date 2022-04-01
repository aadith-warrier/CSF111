#include <stdio.h>
#include <math.h>
#include <ctype.h>

void upper(char array[], int n){
    for (int i=0; i<n; i++){
        array[i]=toupper(array[i]);
    }
}

void display(char array[], int n){
    for (int i=0; i<n; i++){
        printf("%c", array[i]);
}
}

void main(){
    char arr[10] = {'a','b','c','d','e'};
    int n = 10;
    upper(arr, n);
    display(arr, n);
}