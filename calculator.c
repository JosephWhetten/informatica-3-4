#include <stdio.h>

int main() {

    int num1, num2;
    char operation;
    printf("Now enter in an operation\n");
    scanf("%c",&operation);
    printf("Enter in two integers\n");
    scanf("%d%d",&num1,&num2);
    

    if(operation=='+') {
        int result = num1+num2;
        printf("%d\n",result);
    } 

    return 0;
}