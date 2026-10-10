#include<stdio.h>

int main(){
    float P;
    float R;
    float T;
    printf("Enter Principal:");
    scanf("%f", &P);
    printf("Enter Rate of Interest:");
    scanf("%f", &R);
    printf("Enter Time:");
    scanf("%f", &T);
    printf("The Simple Intrest Is %.2f", P*R*T/100);
    return 0;
}
//I got this correct after one try. The mistake I made in the first try was a very rookie mistake. I defined the data type as `float`, but then I was using %d`. 
//And then another thing I learned is that, by default, the function will print up to 6 decimal points because I got the answer 
//as 1.400000 with the values I put in. From this, I learned that there's something you can change in the code so that you get only 2 decimal
//places of whatever number you enter. it is %.2f
