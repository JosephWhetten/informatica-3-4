#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num, die;
    printf("How many dice rolls do you want?\n");
    scanf("%d",&num);
    srand(time(NULL));
    for(int i = 1; i < num + 1; ++i) {
        die = (rand() % 6) + 1;
        printf("Roll %d\t=\t%d\n",i,die);
    }

    return 0;
}