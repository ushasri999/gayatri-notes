#include<stdio.h>

int main(){
    printf("welcome to division calculator\n");
    printf("You have five attempts to calculate\n");

    for(int i = 1; i <= 5; i++){
        printf("%d attempt\n", i);
        int a, b;
        printf("enter the value of a: ");
        scanf("%d", &a);
        printf("enter the value of b: ");
        scanf("%d", &b);

        if(b == 0){
            printf("b should not be 0. so try with other values\n");
            continue;
        }

        printf("a / b = %d\n", (a / b));
    }

    printf("Thank you");

    return 0;
}