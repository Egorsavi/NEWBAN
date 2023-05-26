#include <stdio.h>
#include <math.h>
int main() {
    float a=-M_PI, b=M_PI, dx=M_PI/10;
    for(float i=a;i<=b;i+=dx){
        float res = cos(i) * sin(i);
        printf("f(%f) = %f\n", i, res);
    }
    return 0;
}