#include <stdio.h>

int main() {

    long long int num;
    int i = 0;
    printf("Enter a positive number please.\n");
    scanf("%lli",&num);
    
    if(num / -10 != num) {
        do {
            ++i;
        }
        while((num = num / 10) != 0);
    
        printf("The number of digits are %d\n",i);
    } else {
        printf("IT'S A NEGATIVE NUMBER YOU NUMB\n");
    }

    return 0;
}