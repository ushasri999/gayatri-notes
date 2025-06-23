#include<stdio.h>

int main(){
    // int evenSum = 0;
    // int oddSum = 0;
    // int start;
    // int end;

    // printf("enter the start: ");
    // scanf("%d", &start);

    // printf("enter the end: ");
    // scanf("%d", &end);

    // for(int i = start; i <= end; i++){
    //     if(i % 2 == 1){
    //         oddSum = oddSum + i;
    //     }
    //     else{
    //         evenSum = evenSum + i;
    //     }
    // }

    // ask user the length of arrray
    // scan elemets and store in array

    // iterate through elements and find evenSum and oddSum

    int len;
    printf("Enter the length of array: ");
    scanf("%d", &len);


    int arr[len];
    for(int i = 0; i < len; i++){
        printf("Enter the %dth element", (i + 1));
        scanf("%d", &arr[i]);
    }

    int evenSum = 0;
    int oddSum = 0;
    for(int i = 0; i < len; i++){
        int ele = arr[i];

        if(ele % 2 == 0){
            evenSum += ele;
        }
        else{
            oddSum += ele;
        }
    }

    printf("evenSum = %d\n", evenSum);
    printf("oddSum = %d\n", oddSum);
    

    
    return 0;
}