#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int guess;
    printf("Heads or Tails?\n1. Heads\n2. Tails\n");
    scanf(" %d",&guess);
    srand(time(NULL));
    int num = (rand() % 2) + 1;
    if(num == 1 && guess == 1) {
        printf("Heads, you got it right\n");
    }
    else if(num == 2 && guess == 2) {
        printf("Tails, you got it right\n");
    }
    else if(num == 1 && guess == 2) {
        printf("Heads, you got it wrong\n");
    }
    else if(num == 2 && guess == 1) {
        printf("Tails, you got it wrong\n");
    }

    return 0;
}