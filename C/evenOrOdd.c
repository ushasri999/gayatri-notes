#include<stdio.h>

// take 2 integers from user 

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    switch (num % 2)
    {
        case 0:
            printf("%d is even", num);
            break;
        case 1:
            printf("%d is odd", num);
            break;
        
        default:
            printf("Invalied number");
            break;
    }
    

    return 0;
}