#include<stdio.h>

int main(){
    int aLen;
    printf("Enter length of a: ");
    scanf("%d", &aLen);

    int bLen;
    printf("Enter length of b: ");
    scanf("%d", &bLen);

    if(aLen == bLen){
        int a[aLen];
        printf("Enter the %d elements for a: ", aLen);
        for(int i = 0; i < aLen; i++){
            scanf("%d", &a[i]);
        }


        int b[bLen];
        printf("Enter the %d elements for b: ", bLen);
        for(int i = 0; i < bLen; i++){
            scanf("%d", &b[i]);
        }

        int c[aLen];
        for(int i = 0; i < aLen; i++){
            c[i] = a[i] + b[i];
        }

        printf("sum array c = \n");
        for(int i = 0; i < aLen; i++){
            printf("%d ", c[i]);
        }
    }
    else{
        printf("adding of arrays with different lengths is not allowed");
    }

    return 0;
}