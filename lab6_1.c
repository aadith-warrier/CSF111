#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int is_armstrong(int n){
    int nd, check=0, rem, temp=n;

    nd = (temp==0) ? 1 : log10(temp)+1;

    while (temp != 0){
        rem = temp%10;
        check += pow(rem, nd);
        temp/=10;
    }
    if (check == n){
        printf("%d \n", n);
    }
    return 0;

}

int main(){
    int n1, n2, i;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);
    for (i=n1; i<=n2; i++ ){
        is_armstrong(i);
    }

}