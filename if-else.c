#include <stdio.h>

int main() {

    //Check if two integers are the same
    int number1, number2;
    printf("Please enter two integers, if you would be so kind.\n");
    scanf("%d%d",&number1,&number2);
    if(number1==number2) {
        printf("Both integers are the same.\n");
    }
    else {
        printf("The integers are different.\n");
    }

    //Check if the first integer is an even or odd number
    if((number1%2)==0) {
        printf("The first number is an even number.\n\n");
    }
    else {
        printf("The first number is an odd number.\n\n");
    }

    //Read any day number and print it as a string
    int day;
    printf("Now type a day number (from 1 to 7) you knurd.\n");
    scanf("%d",&day);
    if(day==1) {
        printf("Sunday\n");
    }
    else if(day==2) {
        printf("Monday\n");
    }
    else if(day==3) {
        printf("Tuesday\n");
    }
    else if(day==4) {
        printf("Wednesday\n");
    }
    else if(day==5) {
        printf("Thursday\n");
    }
    else if(day==6) {
        printf("Friday\n");
    }
    else if(day==7) {
        printf("Saturday\n");
    }

    return 0;
}