#include<stdio.h>

// take 2 integers from user 

int main(){
    int operand1, operand2;
    printf("Enter operand1: ");
    scanf("%d", &operand1);
    
    printf("Enter operand2: ");
    scanf("%d", &operand2);
    
    char operator;
    printf("Enter operator: ");
    scanf("\n%c", &operator);
    // printf("operator = %d", operator);


    if(operator == '+'){
        printf("%d + %d = %d", operand1, operand2, (operand1 + operand2));
    }
    else if(operator == '-'){
        printf("%d - %d = %d", operand1, operand2, (operand1 - operand2));
    }
    else if(operator == '*'){
        printf("%d * %d = %d", operand1, operand2, (operand1 * operand2));
    }
    else if(operator == '/'){
        printf("%d / %d = %d", operand1, operand2, (operand1 / operand2));
    }
    else{
        printf("Invalid operator...!");
    }

    return 0;
}