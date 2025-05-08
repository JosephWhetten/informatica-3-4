#include <stdio.h>

int main() {

    long long num, exp;
    int loop;
    
    printf("Enter an integer\n");
    scanf("%lli",&num);
    printf("Enter an exponent\n");
    scanf("%lli",&exp);
    printf("What loop do you want to use?\n1 - while loop\n2 - for loop\nEnter your loop:\n");
    scanf("%d",&loop);
    
    long long expnum = num;
    if(loop == 1) {
    while(exp > 1) {
        num = num * expnum;
        --exp;
    }
    printf("%lli\n",num);
    } 
    else {
    for(exp; exp > 1; --exp) {
        num = num * expnum;
    }
    printf("%lli\n",num);
    }

    return 0;
}