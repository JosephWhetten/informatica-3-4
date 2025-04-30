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
    printf("%d\n",sum);

    sum = 1;
    for(i = 1; i < num + 1; ++i) {
        sum = sum * i;
    }
    printf("%d\n",sum);

    return 0;
}