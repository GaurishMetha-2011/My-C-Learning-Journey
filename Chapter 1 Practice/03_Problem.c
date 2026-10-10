#include<stdio.h>

int main(){
    float C;
    printf("Enter Temperature In C:");
    scanf("%f", &C);
    printf("The Temp. In F is %f", ((9.0/5.0)*C)+32);
    return 0;
}
