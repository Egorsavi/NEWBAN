#include <stdio.h>
#include <math.h>

int main() {
    int summ = 0;
    for(int i=2;i<=10;i+=2){
        summ += i;
    }
    summ = summ*summ;
    printf("%d", summ);
    return 0;
}