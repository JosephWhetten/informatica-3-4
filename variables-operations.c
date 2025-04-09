#include <stdio.h>

int main() {
    //Rectangle
    int l = 10,w = 15;
    int area, peri;
    area = l*w;
    peri = (l*2)+(w*2);

    printf("Length = %d, Width = %d\n",l,w);
    printf("Area: %d\n",area);
    printf("Perimeter: %d\n\n",peri);


    //Temperature calculator
    int F = 98;
    int C = (F - 32)/1.8;

    printf("Temperature = %d°F\n",F);
    printf("%d°F, %d°C\n\n",F,C);


    //Minutes into hours and minutes
    int mins = 349;
    int hours = (mins/60);
    int leftmins = (mins%60);

    printf("%d minutes is equal to %d hours and %d minutes.\n",mins,hours,leftmins);

    return 0;
}