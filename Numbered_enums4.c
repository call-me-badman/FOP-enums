#include <stdio.h>

enum Priority{
    LOW = 10,
    MEDIUM = 20,
    HIGH = 30 ,
    NEXT
};

int main(){
    
    printf("Low threshold: %d\n", LOW);
    printf("Medium threshold: %d\n", MEDIUM);
    printf("High threshold: %d\n", HIGH);
    printf("Next value: %d\n", NEXT);

    if(NEXT == 31){
        printf("NEXT takes on from previous values.");
    }

    return 0;
}