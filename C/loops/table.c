#include<stdio.h>

int main(){
    int num;
    printf("enter the value of num: ");
    scanf("%d", &num);
    int numOfDigits = 0; 
    int digitSum = 0; 

    while(num > 0){ 
        int lastDigit = num % 10; 
        digitSum = digitSum + lastDigit; 
        num = num / 10;

        numOfDigits++;
    }

    printf("you number has %d digits", numOfDigits);
    printf("sum of digits = %d\n", digitSum);

    return 0;
}