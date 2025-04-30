#include <stdio.h>

int main() {

    int num;
    int i;
    int sum = 0;
    printf("Enter an normal integer\n");
    scanf("%d",&num);
    for(i = 1; i < num + 1; ++i) {
        sum = sum + i;
    }
    printf("The sigma of %d is %d.\n",num, sum);

    sum = 1;
    for(i = 1; i < num + 1; ++i) {
        sum = sum * i;
    }
    printf("The factorial of %d is %d.\n",num, sum);

    return 0;
}