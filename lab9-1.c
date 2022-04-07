#include<stdio.h>

int no_of_2000, no_0f_500, no_of_100;

void get_denominations(int);

void get_denominations(int value){
    no_of_2000 = value / 2000;
    no_0f_500 = (value-no_of_2000*2000)/500;
    no_of_100 = (value-no_0f_500*500-no_of_2000*2000)/100;

}

int main(){
    int val;
    printf("Enter the amount you wish to withdraw: ");
    scanf("%d", &val);
    get_denominations(val);
    printf("%d \t %d \t %d \t", no_of_100, no_0f_500, no_of_2000);
}
