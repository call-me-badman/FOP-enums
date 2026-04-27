#include <stdio.h>

enum Days{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int day_validator(enum Days day){
    if(day == SATURDAY || day == SUNDAY){
        return 0;
    }
    return 1;
}