#include <stdio.h>

int main() {

    char snack1[] = "Pinguinos";
    char snack2[] = "Tostitos";
    char snack3[] = "Sprite";

    float price1 = 0.01;
    float price2 = 50.99;
    float price3 = 100.00;

    int quant1 = 100;
    int quant2 = 1;
    int quant3 = 5;

    printf("Welcome to Joe\'s Snack Shop!\n");
    printf("---------------------------------------\n");
    printf("Item\t\tPrice\t\tQuantity\n");
    printf("%s\t$%f\t%d\n",snack1,price1,quant1);
    printf("%s\t$%f\t%d\n",snack2,price2,quant2);
    printf("%s\t\t$%f\t%d\n",snack3,price3,quant3);

    return 0;
}