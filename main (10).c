#include <stdio.h>
#include <math.h>
int main() {
    float x, y;
    printf("Enter x:");
    scanf("%f", &x);
    printf("Enter y:");
    scanf("%f", &y);
    while(x-y<0){
        printf("Irregular values. Try again.\n");
        printf("Enter x:");
        scanf("%f", &x);
        printf("Enter y:");
        scanf("%f", &y);
    }
    float res = (x*x + y*y)/ sqrt(x-y);
    printf("%f", res);
    return 0;
}