#include<stdio.h>

int form_array(){
    int n;

    printf("Enter the number of elements inside of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *p;
    p = &arr;

    for (int i=0; i<n; i++){
        int a;
        printf("Enter the element: ");
        scanf("%d", &a);

        arr[i] = a;
    }

    return p;

}

int binary_search(array, element){
    int l, mid;

    l = sizeof(array)/sizeof(array[0]);
    
}

int main(){
    int p, e, index;
    
    p = form_array();

    printf("Enter the element to tbe found: ");
    scanf("%d", &e);

    index = binary_search();
}