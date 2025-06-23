#include<stdio.h>

int main(){
    int a = 10, b = 5;
    printf("%d\n", (a == b && b < a)); // 0 
    printf("%d\n", (a > b && b != 10 && b < 11 && a < 5)); // 0 
    return 0;
}