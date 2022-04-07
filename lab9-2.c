#include<stdio.h>


void get_denominations(int, int array[3]);

void get_denominations(int value, int notes[3]){
    notes[2] = value / 2000;
    notes[1] = (value-notes[2]*2000)/500;
    notes[0] = (value-notes[1]*500-notes[2]*2000)/100;

}

int main(){
    int val;
    int notes[3]={0,0,0};
    printf("Enter the amount you wish to withdraw: ");
    scanf("%d", &val);
    get_denominations(val, notes);
    printf("%d \t %d \t %d \t", notes[0], notes[1], notes[2]);
}