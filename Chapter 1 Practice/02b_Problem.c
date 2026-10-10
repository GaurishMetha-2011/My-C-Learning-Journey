#include<stdio.h>

int main(){
    float r;
    float h;
    printf("Enter Radius:");
    scanf("%f", &r);
    printf("Enter Height:");
    scanf("%f", &h);
    printf("The Volume is %f cubic meter", 3.1415*r*r*h);
    return 0;
}
//Yeah, even for this one, I could do without any effort. Just modified the previous one and entered the height. 