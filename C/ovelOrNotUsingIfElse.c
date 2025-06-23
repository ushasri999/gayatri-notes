#include<stdio.h>

int main(){
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    // printf("char = %c", ch);

    switch (ch)
    {
        case 1:
            printf("%c is vowel", ch);
            break;
        case 'e':
            printf("%c is vowel", ch);
            break;
        case 'i':
            printf("%c is vowel", ch);
            break;
        case 'o':
            printf("%c is vowel", ch);
            break;
        case 'u':
            printf("%c is vowel", ch);
            break;
        
        default:
            break;
    }

    return 0;
}