#include<stdio.h>
//int + int → int
//int + float → float
//float + float → float
int main(){
    float a = 9.0;
    int b = 2;
    float c = a/b;
    int d = 6.7; //It will not consider the values after the whole number, as the variable type defined is integer, but the value entered is float.
    float e = 8; //Here it will be taken as 8.00000 to match the float variable type.  
    printf("The value of a/b is %f\n", c);
    printf("The value of d is %d\n", d);
    printf("The value of e is %f", e);
    return 0;
}