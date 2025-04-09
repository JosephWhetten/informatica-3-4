#include <stdio.h>

// Prints 
int main() {

    int age;

    printf("What is your age?\n");
    scanf("%d",&age);
    printf("My age is %d\n", age);

    if(age <= 12) {
       printf("You cannot play Shell Shockers\n"); 
    }else{
        printf("You can play Shell Shockers\n");
    }

    return 0;
}