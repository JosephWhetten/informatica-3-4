#include <stdio.h>
float calcAge(int age, float orbit);

int main() {

    const float MERCURY = 0.2408467;
    const float VENUS = 0.61519726;
    const float EARTH = 1;
    const float MARS = 1.8808158;
    const float JUPITER = 11.862615;
    const float SATURN = 29.447498;
    const float URANUS = 84.016846;
    const float NEPTUNE = 164.79132;

    int birth;
    int planet;
    printf("Enter your age\n");
    scanf("%d",&birth);
    printf("Enter the planet you want to be on:\n1. Mercury\n2. Venus\n3. Earth\n4. Mars\n5. Jupiter\n6. Saturn\n7. Uranus\n8. Neptune");
    scanf("%d",&planet);

    for(int i = 1; i < (planet + 1); ++i) {
        int i;
    }
    
    
    return 0;
}

float calcAge(int age, float orbit) {
    float result = age/orbit;
    return result;
}