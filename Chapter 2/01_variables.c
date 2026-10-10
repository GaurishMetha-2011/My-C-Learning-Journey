#include <stdio.h>
// When we define a variable, it is just like a memory container in which a value is stored. The value is stored in memory,
// and we can call out the value from memory when we use that variable.
int main()
{
    int i = 10; // Declare 'i' and initialize with 10
    int j = i;  // Declare 'j' and initialize with 'i'
    int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables
    int j1 = a + j - i; // Valid: use previously defined variables
                        // INVALID
                        // float b = a + 3;
                        // float a = 1.1;
    // %d , %f , %c are format specifiers
    printf("The value of i is %d and the value of j is %d\n", i, j );
    printf("The value of a is %d and the value of b is %d\n", a, b );
    printf("The value of c is %d and the value of d is %d\n", c, d );
    return 0;
}