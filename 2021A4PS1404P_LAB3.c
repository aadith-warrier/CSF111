#include <stdio.h>

void main(){
    float u, v, a, s;

    printf("Enter initial velocity: ");
    scanf("%f", &u);

    printf("Enter final velocity: ");
    scanf("%f", &v);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    s = (v*v - u*u)/2*a;

    printf("The displacement of the particle is: %f", s );
}