#include <stdio.h>

int main() {
    //2020 is a leap year, detect what year is a leap year
    int year;
    
/*- If the year is divisible by 4, it’s a leap year; if not, it is not a leap year.
- If divisible by 4, check if it is divisible by 100; if not, it is a leap year.
- Finally, if the year is divisible by both 4 and 100, check if it is divisible by 400; if yes, it is a leap year; otherwise, it is not.*/

    printf("Enter a year and I'll tell you if it's a leap year or not.\n");
    scanf("%d",&year);
    
    if((year%4==0 && year%100!=0) || year%400==0) {
        printf("it's a leap year man\n");
    } else {
        printf("Obviously not you knurd.\n");
    }

    return 0;
}