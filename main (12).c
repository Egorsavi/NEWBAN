#include <stdio.h>
#include <math.h>
int main() {
    int res=0, x;
    printf("Enter x:");
    scanf("%d", &x);
    for(int i=1;i<=5;i++){
        int t=1;
        for(int j=1;j<=i;j++){
            t*=i+pow(x,j);
        }
        res+=t;
    }
    printf("%d", res);
    return 0;
}