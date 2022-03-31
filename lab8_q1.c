#include<stdio.h>

int main(){

float radius;

float *p;

p = &radius;

printf("Enter the radius of the circle: ");
scanf("%f", &radius);

float area;
float perimeter;

area = 3.14 * (*p) * (*p);
perimeter = 3.14 * 2 * (*p);

printf("The perimeter of the circle is: %f \n", perimeter);
printf("The area of the circle is: %f /n", area);

}