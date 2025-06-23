#include<stdio.h>

int main(){
    int a = 8, b;
    int c = (a++, ++a);


    printf("%d\n", a);

    return 0;
}