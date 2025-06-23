#include<stdio.h>

int main(){
    int num;
    printf("enter any number");
    scanf("%d", &num); num = 4;

    if(num == 0){
        printf("your number is 0");
        printf("so it neighter even nor odd");
        printf("so it neighter even nor odd");
        printf("so it neighter even nor odd");
        printf("so it neighter even nor odd");
        printf("so it neighter even nor odd");
        printf("so it neighter even nor odd");
    }
    else{
        if(num % 2 == 0){
            printf("even number");
        }
        else{
            printf("number is odd");
        }

        printf("this is else");
    }

    printf("my name is usha");

    return 0;
}