#include <stdio.h>

int main() {
    int X;
    double Y, kmL;
    
    scanf("%d \n%lf", &X, &Y);
    kmL = X/Y;
    
    printf("%.3lf km/l\n", kmL);
    return 0;
}
