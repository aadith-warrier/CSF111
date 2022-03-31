#include <stdio.h>
#include <math.h>
float random_shit(int);

float random_shit(int a){
    float value=0.0;

    for(int i=1; i<=a; i++){
        value = value + pow(i,i);
        printf("%f test \n", pow(i,i));
    }

    return value;
}

int main(){
    printf("%f \n", random_shit(3));
}