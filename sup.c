#include <stdio.h>

// Prints 
int main() {

    int age = 16;

    printf("What is your age?\n");
    printf("My age is %d\n", age);

    if(age <= 15) {
       printf("You cannot play Shell Shockers\n"); 
    }else{
        printf("You can play Shell Shockers\n");
    }

    return 0;
}