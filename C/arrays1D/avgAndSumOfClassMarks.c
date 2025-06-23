#include<stdio.h>

int main(){
    int classStrength;
    printf("How many members are there in your class: ");
    scanf("%d", &classStrength);


    int marks[classStrength]; 
    printf("enter marks for %d students\n", classStrength);

    //using loops
    for(int i = 0; i < classStrength; i++){
        printf("Enter the marks for friend %d ", (i + 1));
        scanf("%d", &marks[i]);
    }

    
    // calculating the sum
    int sum = 0;
    float average;
    for(int i = 0; i < classStrength; i++){
        sum = sum + marks[i]; 
    }
    
    // calculating the average
    average = sum / (classStrength * 1.0);
    

    // displaying the marks
    printf("\n\n");
    for(int i = 0; i <= classStrength - 1; i++){
        printf("friend %d marks = %d\n", (i + 1), marks[i]);
    }

    // printing sum and average    
    printf("marks sum = %d\n", sum);
    printf("marks avg = %f\n", average);
    
    return 0;
}