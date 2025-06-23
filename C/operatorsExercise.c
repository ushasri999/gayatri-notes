#include<stdio.h>

int main(){
    int a = 18, b = 9, e = 10;
    int c = b++;
    int d = b;

    // b = 10;
    // c = 9;
    // d = 10;
    printf("%d\n", (a < b< c> d)); // 0
    printf("%d\n", (b == e)); // 1
    printf("%d\n", (c + 1 > e)); // 0
    printf("%d\n", (a + c == b > e < c + d)); // 0
    return 0;
}