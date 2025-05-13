#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long num, exp;
    int loop;
    
    printf("Enter an integer\n");
    scanf("%lli",&num);
    printf("Enter an exponent\n");
    scanf("%lli",&exp);
    printf("What loop do you want to use?\n1 - while loop\n2 - for loop\n3 - pow() funcion\n4 - Enter random numbers\nEnter your loop:\n");
    scanf("%d",&loop);
    
    long long expnum = num;
    if(loop == 1) {
    while(exp > 1) {
        num = num * expnum;
        --exp;
    }
    printf("%lli\n",num);
    } 
    else if(loop == 2) {
        for(exp; exp > 1; --exp) {
            num = num * expnum;
    }
    printf("%lli\n",num);
    }
    else if(loop == 3) {
        long long power = pow(num, exp);
        printf("%lli\n",power);
    }
    else {
        srand(time(NULL));
        num = (rand() % 15) + 1;
        exp = (rand() % 15) + 1;
        long long power = pow(num, exp);
        printf("%lli\n",power);
    }

    return 0;
}