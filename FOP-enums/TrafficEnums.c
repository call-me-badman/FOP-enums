#include <stdio.h>

enum TrafficLights{
    RED,
    YELLOW,
    GREEN
};


int main(){
    enum TrafficLights light = GREEN;

    if (light == RED){
    printf("Stop");
    } else if( light == YELLOW ){
        printf("Get Ready");
    }else {
        printf("Go");
    }

    return 0;
}