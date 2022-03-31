#include <stdio.h>

int binary_search(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binary_search(arr, l, mid - 1, x);

        return binary_search(arr, mid + 1, r, x);
    }

    return -1;
}

int main(void)
{
    int arr[] = { 1, 3, 45, 69, 420};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binary_search(arr, 0, n - 1, x);

    printf("The element was found at: %d \n",result);  

    return 0;
}