#include<stdio.h>

int main(){
    int len;
    printf("enter the length of the array: ");
    scanf("%d", &len);
    int a[len];

    printf("enter %d elements for array: ", len);
    for(int i = 0; i < len; i++){
        scanf("%d", &a[i]);
    }
    
    printf("\nHere are the array elements\n");
    for(int i = 0; i < len; i++){
        printf("%d element = %d\n", (i + 1), a[i]);
    }
    
    return 0;
}