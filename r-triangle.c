#include <stdio.h>

int main() {

    int height;
    int col;
    int row;
    char text;
    int spacing;
    printf("Enter the height of a triangle.\n");
    scanf("%d",&height);
    printf("Enter a letter for the triangle.\n");
    scanf(" %c",&text);
    for(col = 1; col < (height + 1); ++col) {
            for(spacing = height; spacing > col; --spacing) {
                printf(" ");
            }
            for(row = 1; row < (col+1); ++row) {
                printf("%c",text);
            }
            printf("\n");
        }
        
    

    return 0;
}