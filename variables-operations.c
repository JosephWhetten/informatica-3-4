#include <stdio.h>

int main() {
    //Rectangle
    int l,w;
    int area, peri;
    printf("Insert a length and wide of a rectangle\n");
    scanf("%d%d",&l,&w);
    area = l*w;
    peri = (l*2)+(w*2); 
    printf("Length = %d, Width = %d\n",l,w);
    printf("Area: %d\n",area);
    printf("Perimeter: %d\n\n",peri);


    //Temperature calculator
    int F;
    printf("Enter a temperature in Farenheit.\n");
    scanf("%d",&F);
    int C = (F - 32)/1.8;
    printf("Temperature = %d°F\n",F);
    printf("%d°F, %d°C\n\n",F,C);


    //Minutes into hours and minutes
    int mins;
    printf("Enter a number of minutes.\n");
    scanf("%d",&mins);
    int hours = (mins/60);
    int leftmins = (mins%60);
    printf("%d minutes is equal to %d hours and %d minutes.\n",mins,hours,leftmins);

    return 0;
}