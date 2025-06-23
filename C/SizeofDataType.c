#include <stdio.h>

int main() {
    printf("size of short int = %u\n", sizeof(short int));
    printf("size of int = %u\n", sizeof(int));
    printf("size of signed int = %u\n", sizeof(signed int));
    printf("size of unsigned int = %u\n", sizeof(unsigned int));
    
    printf("size of char = %u\n", sizeof(char));
    printf("size of signed char = %u\n", sizeof(signed char));
    printf("size of unsigned char = %u\n", sizeof(unsigned char));
    printf("size of float = %u\n", sizeof(float));
    printf("size of double = %u\n", sizeof(double));
    printf("size of long double = %u\n", sizeof(long double));
    printf("size of void = %u\n", sizeof(void));

}