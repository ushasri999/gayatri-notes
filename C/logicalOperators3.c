#include<stdio.h>

int main(){
    int a = 10, b = 5;
    int result = a > b || a++;
    printf("result = %d\n", result); 
    printf("a = %d\n", a); 
    return 0;
}