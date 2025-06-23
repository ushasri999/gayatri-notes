#include<stdio.h>

int main(){
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);
    
    if(marks >= 40 && marks <= 50){
        printf("E grade");
    }
    else if(marks >= 50 && marks < 60){
        printf("D grade");
    }
    else if(marks >= 70){
        printf("C grade");
    }
    else if(marks >= 80 && marks ){
        printf("B grade");
    }
    else if(marks >= 90 && marks <= 100){
        printf("A grade");
    }
    else{
        printf("Failed");
    }

    return 0;
}