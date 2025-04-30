#include <stdio.h>

int main() {

    int x, y;

    /*for(x = 1; x < 6; ++x) {
        printf("%d  ",x);
    }
    x = 2;
    printf("\n");
    for(x = 2; x < 11; x = x + 2) {
        printf("%d  ",x);
    }
    x = 3;
    printf("\n");
    for(x = 3; x < 16; x = x + 3) {
        printf("%d  ",x);
    }
    x = 4;
    printf("\n");
    for(x = 4; x < 21; x = x + 4) {
        printf("%d  ",x);
    }
    x = 5;
    printf("\n");
    for(x = 5; x < 26; x = x + 5) {
        printf("%d  ",x);
    }*/

    int ask;
    printf("Tell me what multiplication chart you want.\n");
    scanf("%d",&ask);

    for(y = 1; y <= ask; ++y) {
        for(x = y; x < (ask * y) + 1; x = x + y) {
            printf("%d\t",x);
        }
        printf("\n");
    }

    printf("\n");

    for(x = 1; x <= ask; ++x) {
        for(y = 1; y <= ask; ++y) {
            int mult = x * y;
            printf("%d\t",mult);
        }
        printf("\n");
    }

    return 0;
}