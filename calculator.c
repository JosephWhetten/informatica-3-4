#include <stdio.h>

int main() {

    long long int num1, num2;
    char operation;
   
    printf("Enter in an operation.\n");
    scanf("%lld %c %lld",&num1,&operation,&num2);

    int result;
    if(operation=='+') {
        result = num1+num2;
        printf("%d\n",result);
    }
    else if(operation=='-') {
        result = num1-num2;
        printf("%d\n",result);
    }
    else if(operation=='/') {
        result = num1/num2;
        printf("%d\n",result);
    }
    else if(operation=='*') {
        result = num1*num2;
        printf("%d\n",result);
    }
    else if(operation=='%') {
        result = num1%num2;
        printf("%d\n",result);
    }

    return 0;
}