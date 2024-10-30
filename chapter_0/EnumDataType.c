#include <stdio.h>

enum trafficLight{
    RED,
    GREEN,
    YELLOW
};

void displayTrafficLight(enum trafficLight light){
    switch (light)
    {
    case (RED):
        printf("Stop ! it's Red ");
        break;
    case (GREEN):
        printf("You can go");
        break;
    case (YELLOW):
    printf("Be Ready it's yellow");
    break;
    
    default:
        printf("Invalid Light state");
        break;
    }

}

int main(){

    enum trafficLight currentLight;
    currentLight = RED;
    displayTrafficLight(currentLight);
    
    return 0;
}