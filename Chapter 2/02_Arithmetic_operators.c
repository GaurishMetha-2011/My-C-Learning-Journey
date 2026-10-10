#include<stdio.h>

int main(){
    int a = 4;
    int b = 5;
    int c = a+b;
    printf("The Value Of C Is %d \n", c);
    // % is for modulus, It means to get the remainder. 
    printf("The value of the remainder when b is divided by a is %d", b%a);
    //This is wrong and will not work for exponentiation
    // d = a^b;
    return 0;
}