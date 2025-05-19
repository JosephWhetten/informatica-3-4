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

    int user_age;
    int planet;
    printf("Enter your age\n");
    scanf("%d",&user_age);
    printf("Enter the planet you want to be on:\n1. Mercury\n2. Venus\n3. Earth\n4. Mars\n5. Jupiter\n6. Saturn\n7. Uranus\n8. Neptune\n");
    scanf("%d",&planet);

    float answer;
    if(planet == 1) {
        answer = calcAge(user_age,MERCURY);
        printf("You would be %.2f years old\n",answer);
    } else if(planet == 2) {
        answer = calcAge(user_age,VENUS);
        printf("You would be %.2f years old\n",answer);
    } else if(planet == 3) {
        answer = calcAge(user_age,EARTH);
        printf("Pues no duh %.2f is your age\n",answer);
    } else if(planet == 4) {
        answer = calcAge(user_age,MARS);
        printf("You would be %.2f years old\n",answer);
    } else if(planet == 5) {
        answer = calcAge(user_age,JUPITER);
        printf("You would be %.2f years old\n",answer);
    } else if(planet == 6) {
        answer = calcAge(user_age,SATURN);
        printf("You would be %.2f years old\n",answer);
    } else if(planet == 7) {
        answer = calcAge(user_age,URANUS);
        printf("You would be %.2f years old\n",answer);
    } else if(planet == 8) {
        answer = calcAge(user_age,NEPTUNE);
        printf("You would be %.2f years old\n",answer);
    }

    return 0;
}

float calcAge(int age, float orbit) {
    float result = age/orbit;
    return result;
}