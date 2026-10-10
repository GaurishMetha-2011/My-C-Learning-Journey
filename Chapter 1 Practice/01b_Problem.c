#include<stdio.h>

int main(){
    int l;
    int b;
    printf("Enter Length: ");
    scanf("%d", &l);
    printf("Enter Breadth: ");
    scanf("%d", &b);
    printf("The Area Is %d sq.m", l*b);
    return 0;
}
//In this one, I made a small mistake. I treated `scanf` as an input variable, like we do in Python,
//and I entered text previously in the `scanf` function. It was like `enter length` and then the `scanf`
//in the `scanf` function, which is wrong. I understood that, and this is the corrected one. 