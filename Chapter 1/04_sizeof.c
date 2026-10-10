#include <stdio.h>
//The sizeof a function tells how many bytes a particular input type takes. 
int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}
//output
//Size of int: 4 bytes
//Size of char: 1 byte
//Size of float: 4 bytes