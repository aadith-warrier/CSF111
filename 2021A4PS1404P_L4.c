#include <stdio.h>
#include <math.h>

int main() {
    int h, m, s, t, tr, a, b;

    printf("Enter the time: ");
    scanf("%d", &t);

    h = t/3600;

    m = (t - h*3600)/60;

    s = t - h*3600 - m*60;



    printf( "%d \n", h);
    printf( "%d \n", m);
    printf( "%d \n", s);

    return 0;

}
